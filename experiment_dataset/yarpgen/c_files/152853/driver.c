#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 612756491;
unsigned char var_4 = (unsigned char)245;
unsigned int var_5 = 2769367924U;
unsigned long long int var_6 = 10680470748239897494ULL;
signed char var_8 = (signed char)-67;
signed char var_12 = (signed char)-57;
short var_17 = (short)32023;
int zero = 0;
int var_18 = -422010121;
_Bool var_19 = (_Bool)1;
unsigned char var_20 = (unsigned char)41;
short arr_0 [13] ;
unsigned short arr_1 [13] ;
unsigned long long int arr_4 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (short)-29189;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (unsigned short)48233;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = 13481445661189046020ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
