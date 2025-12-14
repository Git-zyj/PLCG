#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3123784750U;
unsigned int var_1 = 1123309789U;
_Bool var_2 = (_Bool)0;
_Bool var_3 = (_Bool)0;
unsigned short var_4 = (unsigned short)64242;
_Bool var_5 = (_Bool)0;
unsigned long long int var_6 = 6016440987015616044ULL;
short var_7 = (short)-31226;
unsigned short var_8 = (unsigned short)44454;
unsigned int var_9 = 4163566819U;
int var_10 = -638648517;
unsigned long long int var_11 = 17964835944919014936ULL;
int zero = 0;
signed char var_12 = (signed char)-94;
short var_13 = (short)11136;
int var_14 = 1229585761;
unsigned char var_15 = (unsigned char)160;
unsigned short var_16 = (unsigned short)6630;
unsigned long long int var_17 = 405061823792998286ULL;
short var_18 = (short)-17102;
unsigned int var_19 = 1652840906U;
unsigned int var_20 = 1486470466U;
_Bool var_21 = (_Bool)1;
unsigned short var_22 = (unsigned short)51289;
unsigned short var_23 = (unsigned short)11882;
int var_24 = -579954663;
unsigned char var_25 = (unsigned char)48;
short var_26 = (short)23557;
unsigned char var_27 = (unsigned char)75;
int var_28 = 529944508;
int var_29 = 158511041;
unsigned short var_30 = (unsigned short)21458;
_Bool var_31 = (_Bool)0;
unsigned short var_32 = (unsigned short)26256;
_Bool var_33 = (_Bool)0;
unsigned short var_34 = (unsigned short)52666;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
