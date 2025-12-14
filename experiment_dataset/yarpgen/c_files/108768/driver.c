#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)24950;
int var_4 = -2050303746;
signed char var_5 = (signed char)125;
unsigned short var_7 = (unsigned short)10719;
unsigned int var_9 = 1995015006U;
unsigned int var_12 = 2809140628U;
int zero = 0;
unsigned long long int var_16 = 2605737310357886347ULL;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 3661458359U;
unsigned int var_19 = 815678838U;
unsigned long long int var_20 = 10890654406878466181ULL;
unsigned long long int arr_13 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_13 [i_0] [i_1] = (i_0 % 2 == 0) ? 3494191648773766186ULL : 9590182745629945023ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
