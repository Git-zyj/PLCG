#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)148;
signed char var_2 = (signed char)127;
_Bool var_3 = (_Bool)1;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)1;
unsigned char var_7 = (unsigned char)182;
_Bool var_9 = (_Bool)0;
unsigned short var_12 = (unsigned short)5923;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)48006;
int zero = 0;
unsigned short var_16 = (unsigned short)6531;
unsigned long long int var_17 = 5707018571998590774ULL;
_Bool var_18 = (_Bool)0;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)-23;
unsigned long long int var_21 = 11443563398104357133ULL;
signed char var_22 = (signed char)42;
unsigned long long int var_23 = 1776577769082931309ULL;
signed char var_24 = (signed char)55;
signed char arr_0 [19] ;
_Bool arr_1 [19] ;
short arr_4 [19] [19] ;
_Bool arr_10 [19] [19] [19] [19] [19] [19] ;
unsigned short arr_12 [19] ;
int arr_7 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (signed char)-105;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = (short)-3118;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_12 [i_0] = (unsigned short)21510;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? 1282741108 : 689815422;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
