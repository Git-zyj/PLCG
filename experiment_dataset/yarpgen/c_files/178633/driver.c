#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_11 = (short)-18516;
unsigned short var_13 = (unsigned short)53248;
unsigned long long int var_14 = 10562872413194176388ULL;
int zero = 0;
int var_15 = -68857323;
unsigned long long int var_16 = 17614546700744458398ULL;
long long int var_17 = 6505761975227434158LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
