#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)49;
_Bool var_2 = (_Bool)1;
short var_5 = (short)7804;
unsigned short var_9 = (unsigned short)57838;
int zero = 0;
short var_10 = (short)-5243;
unsigned long long int var_11 = 8435978821200399354ULL;
unsigned char var_12 = (unsigned char)116;
unsigned short var_13 = (unsigned short)5811;
signed char var_14 = (signed char)-94;
unsigned int arr_2 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 2037105443U : 3471894478U;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
