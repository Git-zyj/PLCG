#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)99;
unsigned char var_3 = (unsigned char)48;
unsigned int var_4 = 1955716252U;
unsigned char var_14 = (unsigned char)28;
int zero = 0;
unsigned char var_15 = (unsigned char)140;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 1569831320U;
unsigned short var_18 = (unsigned short)7048;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
