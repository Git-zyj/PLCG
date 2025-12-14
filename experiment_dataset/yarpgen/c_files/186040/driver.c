#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)42619;
unsigned short var_4 = (unsigned short)11907;
unsigned int var_5 = 1899791863U;
unsigned int var_7 = 615876152U;
unsigned short var_10 = (unsigned short)48858;
int zero = 0;
unsigned int var_11 = 3574076673U;
unsigned int var_12 = 942182734U;
unsigned short var_13 = (unsigned short)12408;
unsigned int var_14 = 2015613623U;
void init() {
}

void checksum() {
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
