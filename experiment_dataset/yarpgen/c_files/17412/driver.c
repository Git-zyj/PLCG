#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 54574212330580892ULL;
unsigned short var_1 = (unsigned short)19679;
unsigned char var_2 = (unsigned char)102;
unsigned short var_6 = (unsigned short)24801;
signed char var_8 = (signed char)-42;
_Bool var_10 = (_Bool)1;
unsigned int var_13 = 3398522786U;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)-7;
int zero = 0;
unsigned int var_17 = 750343962U;
signed char var_18 = (signed char)-46;
unsigned int var_19 = 474337450U;
long long int var_20 = -6346933471108373908LL;
short var_21 = (short)-7530;
int var_22 = 783374030;
unsigned int var_23 = 2808376116U;
_Bool arr_0 [24] [24] ;
unsigned long long int arr_1 [24] [24] ;
unsigned char arr_2 [14] ;
unsigned short arr_4 [14] ;
long long int arr_6 [14] [14] ;
signed char arr_7 [14] ;
_Bool arr_5 [14] ;
unsigned int arr_11 [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = 10878592338810670129ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (unsigned char)215;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (unsigned short)53256;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? 5052044385275825507LL : -844860302768340961LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = (signed char)99;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 1838589023U : 2950205077U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
