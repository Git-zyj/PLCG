#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_1 = (unsigned short)38351;
short var_5 = (short)2073;
unsigned short var_10 = (unsigned short)4890;
short var_11 = (short)23536;
unsigned char var_15 = (unsigned char)85;
unsigned int var_16 = 1838598057U;
int var_18 = 1064738372;
int var_19 = 1766926616;
int zero = 0;
unsigned char var_20 = (unsigned char)165;
unsigned char var_21 = (unsigned char)234;
unsigned char var_22 = (unsigned char)45;
unsigned long long int var_23 = 7356963139602684196ULL;
short var_24 = (short)-23870;
short var_25 = (short)-27694;
unsigned char var_26 = (unsigned char)80;
int var_27 = -873871742;
signed char var_28 = (signed char)91;
int var_29 = -463710756;
_Bool var_30 = (_Bool)0;
unsigned int var_31 = 3793562241U;
unsigned char var_32 = (unsigned char)130;
unsigned int arr_4 [17] ;
long long int arr_6 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = 3254871110U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? -4946889048160843799LL : -1209978054022839637LL;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
