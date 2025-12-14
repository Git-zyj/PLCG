#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
_Bool var_3 = (_Bool)1;
_Bool var_8 = (_Bool)0;
_Bool var_10 = (_Bool)0;
unsigned short var_12 = (unsigned short)42196;
_Bool var_14 = (_Bool)0;
unsigned int var_16 = 3596323073U;
signed char var_17 = (signed char)104;
int zero = 0;
unsigned char var_19 = (unsigned char)191;
short var_20 = (short)15515;
signed char var_21 = (signed char)79;
unsigned short var_22 = (unsigned short)61314;
signed char var_23 = (signed char)118;
unsigned short var_24 = (unsigned short)39293;
signed char var_25 = (signed char)116;
short var_26 = (short)1530;
unsigned short arr_8 [13] [13] [13] [13] ;
short arr_13 [15] ;
long long int arr_14 [15] ;
unsigned int arr_15 [15] ;
unsigned int arr_11 [13] [13] [13] ;
unsigned int arr_16 [15] ;
short arr_17 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (unsigned short)48346;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_13 [i_0] = (short)-31507;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_14 [i_0] = -3541634211311090823LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_15 [i_0] = 1293496085U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 2756841906U : 840202990U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_16 [i_0] = 410449948U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_17 [i_0] = (short)3913;
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
