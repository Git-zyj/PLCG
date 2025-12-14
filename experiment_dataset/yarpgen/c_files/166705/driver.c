#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)10598;
unsigned int var_9 = 1055619770U;
unsigned long long int var_12 = 6064672193329921508ULL;
unsigned short var_13 = (unsigned short)46320;
int zero = 0;
unsigned long long int var_14 = 14986718404416307758ULL;
unsigned char var_15 = (unsigned char)159;
unsigned int var_16 = 1723948091U;
unsigned char var_17 = (unsigned char)147;
short var_18 = (short)-14228;
unsigned char arr_0 [16] ;
unsigned long long int arr_2 [16] ;
int arr_3 [16] ;
unsigned long long int arr_4 [16] [16] ;
unsigned long long int arr_5 [16] [16] ;
unsigned char arr_6 [16] [16] ;
int arr_7 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (unsigned char)72;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = 13451706233556361257ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = -1666566223;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = 9069216415880660979ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_5 [i_0] [i_1] = 11645242837876201289ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)216;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? -172530182 : 272158234;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
