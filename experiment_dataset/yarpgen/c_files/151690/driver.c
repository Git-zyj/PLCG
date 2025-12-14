#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4898984312508296749LL;
unsigned char var_2 = (unsigned char)30;
unsigned char var_3 = (unsigned char)253;
unsigned int var_5 = 2276660836U;
int var_6 = 1251285052;
short var_7 = (short)-25404;
int var_9 = 793852634;
int zero = 0;
short var_10 = (short)15663;
long long int var_11 = 8462042960195748028LL;
unsigned int var_12 = 1283533591U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
