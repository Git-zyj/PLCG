#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)126;
unsigned char var_8 = (unsigned char)178;
unsigned char var_12 = (unsigned char)234;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 502419592591644755ULL;
unsigned char var_16 = (unsigned char)2;
void init() {
}

void checksum() {
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
