#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)2147;
unsigned int var_4 = 3724617032U;
unsigned int var_10 = 294461809U;
signed char var_12 = (signed char)-83;
int zero = 0;
unsigned long long int var_14 = 17950301834577676820ULL;
unsigned long long int var_15 = 9256121802727086264ULL;
unsigned short var_16 = (unsigned short)43810;
short var_17 = (short)23718;
unsigned long long int arr_0 [16] ;
unsigned long long int arr_1 [16] ;
long long int arr_3 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 3295667339157591807ULL : 9578705654210774345ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 15616703187463575356ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 4498957272493593250LL : -6640848864331948183LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
