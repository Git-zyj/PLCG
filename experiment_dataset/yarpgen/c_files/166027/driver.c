#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 478010864U;
int var_6 = -464450762;
_Bool var_10 = (_Bool)1;
unsigned short var_12 = (unsigned short)47155;
int zero = 0;
unsigned int var_16 = 1658641826U;
unsigned int var_17 = 3556628370U;
unsigned int var_18 = 2212184061U;
signed char var_19 = (signed char)43;
unsigned short arr_5 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)46852;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
