#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 10240201359984619774ULL;
short var_7 = (short)24841;
int zero = 0;
unsigned short var_15 = (unsigned short)36852;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)46713;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 3633717676U;
unsigned int var_20 = 1836770131U;
short arr_5 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (short)-11819;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
