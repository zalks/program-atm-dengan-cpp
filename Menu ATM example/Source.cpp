#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	unsigned int deposit, tarik, saldo, struk;
	char perintah;
	saldo = 1000000;

	cout << "Selamat datang\n+++++++++++++++++\n" << endl;
	cout << "Pilih transaksi yang hendak anda lakukan" << endl;
	cout << "1. SETOR TUNAI\n2. TARIK TUNAI\n3. CEK SALDO\n4. BATAL\n";
	cout << "--------------------------------------------------------\n";
	cin >> perintah;

	system("cls");

	switch (perintah)
	{
	case '1':
		cout << "Masukkan nominal uang yang ingin disetor\n";
		cout << "(Pecahan 50.000)" << endl;
		cin >> deposit;
		if (deposit % 50000 == 0)
		{
			cout << "Ingin mencetak struk? Jika tidak, akan ditampilkan di layar\n1. Ya\n2. Tidak\n";
			cin >> struk;
			if (struk == 1)
			{
				cout << "Silakan ambil struk" << endl;
			}
			if (struk == 2)
			{
				cout << "Jumlah saldo: " << saldo + deposit << endl;
			}
		}
		else cout << "Nominalnya tidak sesuai!" << endl;
		break;
	case '2':
		cout << "Masukkan nominal uang yang ingin ditarik\n";
		cout << "(Pecahan 50.000)" << endl;
		cin >> tarik;
		if ((tarik % 50000 == 0) && (tarik <= saldo))
		{
			cout << "Ingin mencetak struk? Jika tidak, saldo akan ditampilkan di layar\n1. Ya\n2. Tidak\n";
			cin >> struk;
			if (struk == 1)
			{
				cout << "Silakan ambil struk" << endl;
			}
			if (struk == 2)
			{
				cout << "Jumlah saldo: " << saldo - tarik << endl;
			}
		}
		else cout << "Nominalnya tidak sesuai!" << endl;
		break;
	case '3':
		cout << "Jumlah saldo: " << saldo << endl;
		break;
	case '4':
		cout << "Silakan ambil kartu anda" << endl;
		break;
	default:
		cout << "Transaksi tidak sesuai!!!" << endl;
	}
	cout << "Terima kasih :)" << endl;
	cin.get();
}
