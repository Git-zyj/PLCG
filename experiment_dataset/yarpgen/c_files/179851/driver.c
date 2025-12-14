#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)9024;
unsigned int var_1 = 2941547071U;
unsigned short var_2 = (unsigned short)45088;
int var_3 = -108953649;
short var_4 = (short)7790;
short var_5 = (short)-10380;
unsigned char var_6 = (unsigned char)154;
short var_7 = (short)4118;
signed char var_8 = (signed char)-9;
signed char var_9 = (signed char)-98;
unsigned char var_10 = (unsigned char)80;
int var_11 = 69006880;
int var_12 = -1503549772;
unsigned short var_13 = (unsigned short)1193;
unsigned int var_14 = 2704584480U;
signed char var_15 = (signed char)-4;
int var_16 = 1695085924;
unsigned short var_17 = (unsigned short)40876;
signed char var_18 = (signed char)-20;
int zero = 0;
long long int var_19 = 390958298246521620LL;
unsigned short var_20 = (unsigned short)27816;
short var_21 = (short)19906;
long long int var_22 = -4590237122632458574LL;
unsigned int var_23 = 601453136U;
short var_24 = (short)12845;
unsigned short var_25 = (unsigned short)25029;
unsigned int var_26 = 2160058421U;
short var_27 = (short)24566;
unsigned short var_28 = (unsigned short)41988;
signed char var_29 = (signed char)-63;
unsigned int var_30 = 3586895678U;
short var_31 = (short)15897;
signed char var_32 = (signed char)-50;
unsigned int var_33 = 1427143318U;
int var_34 = -1990477368;
unsigned short var_35 = (unsigned short)55370;
unsigned int var_36 = 1840912077U;
unsigned char var_37 = (unsigned char)83;
signed char var_38 = (signed char)-45;
short var_39 = (short)9416;
unsigned int var_40 = 1248309911U;
long long int var_41 = 2698670601495044100LL;
_Bool var_42 = (_Bool)0;
short var_43 = (short)9257;
unsigned short var_44 = (unsigned short)36080;
unsigned int var_45 = 3587076393U;
int var_46 = 382638382;
long long int var_47 = 5477499277580095559LL;
void init() {
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
