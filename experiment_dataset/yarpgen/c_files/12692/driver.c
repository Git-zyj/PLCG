#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -6559797354508908470LL;
long long int var_5 = -8732428986756544803LL;
long long int var_7 = 9084775580034839507LL;
short var_12 = (short)25426;
unsigned char var_14 = (unsigned char)79;
unsigned short var_15 = (unsigned short)30345;
int zero = 0;
int var_20 = 325767927;
unsigned long long int var_21 = 10977585631431569909ULL;
unsigned char var_22 = (unsigned char)24;
unsigned long long int arr_0 [16] ;
unsigned int arr_1 [16] [16] ;
int arr_2 [16] ;
short arr_3 [16] [16] ;
unsigned short arr_4 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 3815669114169185905ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = 2838218560U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = -1950466977;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = (short)-27078;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)9128;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
