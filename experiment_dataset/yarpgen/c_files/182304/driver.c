#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)63;
unsigned short var_5 = (unsigned short)18193;
unsigned long long int var_8 = 41498716982955656ULL;
unsigned long long int var_10 = 518226240759046813ULL;
short var_11 = (short)-1760;
int zero = 0;
unsigned int var_12 = 2540945140U;
unsigned long long int var_13 = 7022276395608844077ULL;
unsigned long long int var_14 = 11426484192128321039ULL;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 3931563907U;
unsigned char var_17 = (unsigned char)76;
unsigned char var_18 = (unsigned char)230;
short arr_0 [11] ;
signed char arr_2 [11] ;
unsigned char arr_6 [11] ;
long long int arr_10 [11] [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (short)12093;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (signed char)7;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = (unsigned char)85;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 1372332377211409545LL : -2726944292226750056LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    hash(&seed, arr_10 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
