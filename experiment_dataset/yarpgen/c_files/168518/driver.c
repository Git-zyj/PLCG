#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10573932912774562899ULL;
unsigned long long int var_1 = 1753335446355856856ULL;
long long int var_2 = 7498893017959374636LL;
unsigned long long int var_3 = 9059356502615306991ULL;
unsigned char var_4 = (unsigned char)91;
unsigned short var_5 = (unsigned short)841;
signed char var_6 = (signed char)55;
unsigned short var_7 = (unsigned short)26013;
short var_8 = (short)6897;
long long int var_9 = 2021201227646637299LL;
int zero = 0;
short var_10 = (short)-3077;
long long int var_11 = 6256127601695853146LL;
short var_12 = (short)-12183;
signed char var_13 = (signed char)-54;
long long int var_14 = 1826370805755460650LL;
signed char var_15 = (signed char)-120;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)-89;
unsigned int var_18 = 1173623571U;
unsigned int var_19 = 942281934U;
unsigned char var_20 = (unsigned char)39;
unsigned int var_21 = 1861701578U;
short var_22 = (short)13863;
unsigned int var_23 = 3415852373U;
unsigned short var_24 = (unsigned short)64150;
short var_25 = (short)-9782;
_Bool var_26 = (_Bool)1;
unsigned int var_27 = 2378927806U;
unsigned short var_28 = (unsigned short)59842;
_Bool var_29 = (_Bool)1;
unsigned int var_30 = 4165797468U;
signed char var_31 = (signed char)115;
_Bool var_32 = (_Bool)1;
long long int var_33 = 5030868545902951344LL;
unsigned short var_34 = (unsigned short)13521;
unsigned long long int var_35 = 12634871328377080563ULL;
unsigned long long int var_36 = 13957013870309205255ULL;
short var_37 = (short)9670;
long long int var_38 = -1075316422857668201LL;
unsigned short var_39 = (unsigned short)4908;
long long int var_40 = -7243005779192651984LL;
unsigned short var_41 = (unsigned short)22003;
int var_42 = 1725330540;
long long int var_43 = 1694963892359278792LL;
_Bool var_44 = (_Bool)1;
signed char var_45 = (signed char)91;
unsigned long long int var_46 = 3104194804609145903ULL;
unsigned int var_47 = 4034948054U;
unsigned short var_48 = (unsigned short)9350;
short var_49 = (short)29880;
long long int var_50 = 3691996731627511601LL;
long long int var_51 = 6855153187104414423LL;
_Bool var_52 = (_Bool)1;
unsigned char var_53 = (unsigned char)206;
long long int var_54 = -9130968412120279332LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
    hash(&seed, var_53);
    hash(&seed, var_54);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
