#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8501037839639866832ULL;
unsigned short var_1 = (unsigned short)54954;
unsigned int var_2 = 1177432767U;
signed char var_3 = (signed char)83;
unsigned long long int var_4 = 98133145261230928ULL;
short var_5 = (short)20273;
_Bool var_6 = (_Bool)0;
unsigned int var_7 = 3167204361U;
unsigned long long int var_8 = 5152874668383606288ULL;
int var_9 = -401911022;
long long int var_10 = -7451186359716397642LL;
_Bool var_11 = (_Bool)0;
unsigned char var_13 = (unsigned char)225;
int zero = 0;
unsigned short var_14 = (unsigned short)28810;
unsigned short var_15 = (unsigned short)51756;
int var_16 = 2137335774;
unsigned long long int var_17 = 11739488742746595839ULL;
unsigned long long int var_18 = 7248455435161111545ULL;
unsigned int var_19 = 497486250U;
signed char var_20 = (signed char)-124;
unsigned long long int var_21 = 1934846590997898420ULL;
int var_22 = 833207880;
short var_23 = (short)-11675;
unsigned long long int var_24 = 12126487436021849207ULL;
short var_25 = (short)-20717;
unsigned char var_26 = (unsigned char)238;
_Bool var_27 = (_Bool)1;
unsigned char var_28 = (unsigned char)8;
unsigned char var_29 = (unsigned char)9;
unsigned short var_30 = (unsigned short)54662;
unsigned short var_31 = (unsigned short)721;
int var_32 = -2123509854;
unsigned short var_33 = (unsigned short)31839;
int var_34 = 1513904017;
signed char var_35 = (signed char)13;
unsigned long long int var_36 = 67288192231511543ULL;
_Bool var_37 = (_Bool)1;
int var_38 = 1982785950;
signed char var_39 = (signed char)-75;
unsigned short var_40 = (unsigned short)20713;
short var_41 = (short)-16543;
short var_42 = (short)-16101;
_Bool var_43 = (_Bool)1;
unsigned char var_44 = (unsigned char)25;
_Bool var_45 = (_Bool)0;
unsigned short var_46 = (unsigned short)18788;
unsigned long long int var_47 = 770655583186014425ULL;
short var_48 = (short)-5838;
short var_49 = (short)6045;
unsigned int var_50 = 754580453U;
_Bool var_51 = (_Bool)1;
unsigned long long int var_52 = 1382854569845637102ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
    hash(&seed, var_43);
    hash(&seed, var_44);
    hash(&seed, var_45);
    hash(&seed, var_46);
    hash(&seed, var_47);
    hash(&seed, var_48);
    hash(&seed, var_49);
    hash(&seed, var_50);
    hash(&seed, var_51);
    hash(&seed, var_52);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
