#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 160790167U;
_Bool var_7 = (_Bool)0;
signed char var_10 = (signed char)-27;
int var_16 = 1042385216;
short var_17 = (short)-6881;
int zero = 0;
unsigned short var_20 = (unsigned short)62627;
signed char var_21 = (signed char)99;
unsigned long long int var_22 = 8702023326603677450ULL;
short var_23 = (short)-28935;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
