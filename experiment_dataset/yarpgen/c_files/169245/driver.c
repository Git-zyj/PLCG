#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-56;
int var_2 = 1767164039;
short var_4 = (short)2505;
unsigned short var_6 = (unsigned short)33827;
_Bool var_10 = (_Bool)0;
unsigned int var_11 = 770993667U;
int zero = 0;
short var_15 = (short)-27043;
unsigned int var_16 = 3402101535U;
short var_17 = (short)-5525;
unsigned int arr_0 [11] ;
short arr_1 [11] ;
short arr_2 [11] ;
_Bool arr_3 [11] [11] ;
unsigned long long int arr_4 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 4208450129U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (short)2679;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (short)-17564;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = 395708216350354728ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
