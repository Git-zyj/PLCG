#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)12796;
_Bool var_7 = (_Bool)1;
int zero = 0;
unsigned char var_11 = (unsigned char)132;
unsigned long long int var_12 = 1880524924068983663ULL;
unsigned long long int var_13 = 11723252873176417099ULL;
short var_14 = (short)7874;
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
