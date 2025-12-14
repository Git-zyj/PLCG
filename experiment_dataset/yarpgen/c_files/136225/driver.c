#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6153845957169410640ULL;
unsigned short var_1 = (unsigned short)29500;
_Bool var_4 = (_Bool)0;
short var_9 = (short)-17168;
unsigned int var_13 = 2492253258U;
int zero = 0;
int var_15 = 365080474;
signed char var_16 = (signed char)53;
int var_17 = -1859101233;
long long int arr_1 [19] ;
unsigned long long int arr_2 [19] ;
unsigned long long int arr_3 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 6070913243762917170LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = 7921558712181946688ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = 8836504035612697537ULL;
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
