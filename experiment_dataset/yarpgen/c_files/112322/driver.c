#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_4 = 788853350U;
unsigned char var_5 = (unsigned char)83;
unsigned int var_6 = 2727728381U;
unsigned char var_8 = (unsigned char)224;
int zero = 0;
int var_11 = 1481418905;
unsigned char var_12 = (unsigned char)66;
int var_13 = -899382165;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
