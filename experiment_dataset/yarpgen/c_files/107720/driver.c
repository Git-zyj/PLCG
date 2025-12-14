#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_1 = (signed char)-43;
int var_2 = 2061200566;
unsigned short var_3 = (unsigned short)43659;
signed char var_4 = (signed char)-72;
long long int var_5 = 1039760453699379481LL;
short var_6 = (short)5969;
unsigned long long int var_7 = 10437890573204253160ULL;
int var_8 = -1386966673;
long long int var_9 = 5545290178596819373LL;
unsigned long long int var_10 = 10304195658628390570ULL;
unsigned short var_11 = (unsigned short)56667;
int zero = 0;
signed char var_12 = (signed char)3;
unsigned char var_13 = (unsigned char)79;
unsigned long long int var_14 = 1916708247361830103ULL;
short var_15 = (short)-7443;
unsigned long long int var_16 = 13353411053339083588ULL;
short var_17 = (short)2052;
unsigned char var_18 = (unsigned char)252;
signed char var_19 = (signed char)-22;
unsigned int var_20 = 1686478199U;
unsigned short var_21 = (unsigned short)42263;
short var_22 = (short)14088;
signed char var_23 = (signed char)-59;
long long int var_24 = 4286447521714343347LL;
unsigned int var_25 = 674242006U;
unsigned long long int var_26 = 4969657482101293148ULL;
signed char var_27 = (signed char)-59;
short var_28 = (short)-13068;
unsigned long long int var_29 = 2182198722754923176ULL;
unsigned char var_30 = (unsigned char)178;
unsigned short var_31 = (unsigned short)52773;
long long int var_32 = 7619001552045713957LL;
unsigned int var_33 = 2429655473U;
short var_34 = (short)-19753;
long long int var_35 = -50358964670594723LL;
void init() {
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
