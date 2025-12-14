#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 590750434387901688ULL;
int var_5 = -1688386418;
unsigned char var_9 = (unsigned char)182;
unsigned char var_11 = (unsigned char)212;
short var_14 = (short)-1385;
int zero = 0;
unsigned long long int var_15 = 9049639785660683614ULL;
unsigned char var_16 = (unsigned char)148;
short var_17 = (short)21615;
_Bool var_18 = (_Bool)0;
long long int var_19 = -5802223984531303456LL;
long long int var_20 = -4396669001158844538LL;
unsigned int var_21 = 1144034523U;
signed char var_22 = (signed char)111;
long long int arr_0 [24] [24] ;
unsigned int arr_1 [24] ;
long long int arr_2 [24] [24] [24] ;
unsigned char arr_3 [24] ;
long long int arr_13 [17] [17] [17] ;
unsigned short arr_15 [17] [17] ;
unsigned long long int arr_4 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = -8160165233205878330LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 69351336U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 5362939559155563273LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (unsigned char)143;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = -7827235822641176791LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_15 [i_0] [i_1] = (unsigned short)17141;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = 1580075346352210211ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
