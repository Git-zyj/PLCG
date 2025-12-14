#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1194238365148201909LL;
_Bool var_2 = (_Bool)0;
int var_4 = -1595918361;
signed char var_5 = (signed char)0;
_Bool var_6 = (_Bool)1;
signed char var_8 = (signed char)96;
unsigned int var_11 = 690090870U;
short var_12 = (short)-795;
unsigned char var_13 = (unsigned char)75;
unsigned int var_14 = 464693198U;
short var_15 = (short)32736;
signed char var_16 = (signed char)-84;
unsigned char var_17 = (unsigned char)222;
int zero = 0;
unsigned short var_18 = (unsigned short)16464;
signed char var_19 = (signed char)125;
short var_20 = (short)2772;
unsigned int var_21 = 1326141387U;
short var_22 = (short)1684;
signed char var_23 = (signed char)-99;
unsigned int arr_12 [25] [25] ;
unsigned short arr_13 [25] ;
_Bool arr_5 [13] [13] [13] ;
short arr_10 [23] [23] ;
unsigned short arr_11 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_12 [i_0] [i_1] = 2006575860U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_13 [i_0] = (unsigned short)13090;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_10 [i_0] [i_1] = (short)27021;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_11 [i_0] = (unsigned short)16294;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
