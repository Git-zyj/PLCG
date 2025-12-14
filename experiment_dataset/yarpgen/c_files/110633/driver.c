#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2842544188U;
unsigned int var_1 = 3514904319U;
short var_6 = (short)-31597;
signed char var_7 = (signed char)4;
short var_9 = (short)8990;
unsigned long long int var_10 = 14927495475919743075ULL;
unsigned char var_11 = (unsigned char)233;
int zero = 0;
short var_12 = (short)-9379;
unsigned int var_13 = 1841907468U;
unsigned long long int var_14 = 12348675055590740928ULL;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)59874;
short var_17 = (short)-20810;
unsigned int var_18 = 2953479344U;
signed char arr_0 [12] ;
unsigned short arr_1 [12] ;
unsigned short arr_2 [12] [12] ;
unsigned int arr_4 [12] ;
unsigned char arr_5 [12] [12] [12] ;
short arr_6 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (signed char)-32;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (unsigned short)10322;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)53170;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = 112146308U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned char)112;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = (short)-12225;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
