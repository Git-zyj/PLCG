#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-20864;
unsigned long long int var_4 = 4843844130319969700ULL;
signed char var_5 = (signed char)-92;
unsigned char var_6 = (unsigned char)103;
unsigned short var_7 = (unsigned short)30833;
unsigned short var_10 = (unsigned short)62224;
signed char var_12 = (signed char)88;
short var_13 = (short)12090;
signed char var_15 = (signed char)101;
int zero = 0;
unsigned long long int var_16 = 1942412292217026302ULL;
int var_17 = -47516711;
unsigned long long int var_18 = 10909773437735941238ULL;
int var_19 = -293753315;
unsigned int var_20 = 2464021344U;
unsigned short var_21 = (unsigned short)32331;
unsigned int var_22 = 3305417428U;
unsigned char var_23 = (unsigned char)134;
int arr_2 [11] ;
unsigned long long int arr_4 [11] [11] [11] ;
unsigned int arr_7 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = 2048445879;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 3778527851819011746ULL : 1251336972273984686ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 4098676167U : 1651146881U;
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
