#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 883554844346696832ULL;
signed char var_2 = (signed char)-36;
unsigned short var_3 = (unsigned short)6165;
unsigned short var_5 = (unsigned short)15354;
long long int var_6 = 213769185331231086LL;
unsigned char var_7 = (unsigned char)67;
signed char var_8 = (signed char)101;
unsigned char var_10 = (unsigned char)131;
int zero = 0;
unsigned long long int var_12 = 8481012890129463189ULL;
unsigned int var_13 = 2945136691U;
unsigned long long int var_14 = 8345998458498257500ULL;
long long int var_15 = 2911350646827035893LL;
long long int var_16 = -3180700362382804635LL;
signed char arr_0 [24] [24] ;
short arr_1 [24] [24] ;
unsigned short arr_3 [24] ;
unsigned long long int arr_4 [24] [24] ;
long long int arr_5 [24] ;
unsigned long long int arr_8 [21] ;
unsigned char arr_6 [24] [24] ;
unsigned int arr_12 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)42;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = (short)21660;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (unsigned short)43861;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = 13629393934114969670ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = 4859626478921629277LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = 13978509263719610238ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)204;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_12 [i_0] = 2473868229U;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
