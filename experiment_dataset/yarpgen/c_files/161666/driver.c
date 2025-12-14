#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -7305583970787000945LL;
int var_5 = 642209725;
unsigned long long int var_7 = 735802275632638612ULL;
unsigned int var_10 = 2719454876U;
long long int var_11 = -5241381668951467774LL;
unsigned long long int var_13 = 4553893476656840079ULL;
int zero = 0;
short var_14 = (short)-23445;
unsigned int var_15 = 3528433653U;
unsigned int var_16 = 1748192147U;
unsigned int var_17 = 2444899431U;
_Bool arr_0 [23] ;
unsigned long long int arr_1 [23] ;
short arr_2 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 10587924190003648523ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (short)22956;
}

void checksum() {
    hash(&seed, var_14);
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
