#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)98;
unsigned int var_7 = 3994257708U;
unsigned short var_8 = (unsigned short)44871;
int zero = 0;
short var_12 = (short)-20154;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 2285914564U;
short var_15 = (short)12796;
unsigned short var_16 = (unsigned short)6991;
unsigned short arr_0 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned short)13830 : (unsigned short)41205;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
