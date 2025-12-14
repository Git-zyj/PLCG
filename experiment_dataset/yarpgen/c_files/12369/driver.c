#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 1500060370U;
int var_10 = 138633217;
short var_14 = (short)-15921;
short var_15 = (short)-2395;
int zero = 0;
int var_17 = 1946886719;
unsigned short var_18 = (unsigned short)44875;
void init() {
}

void checksum() {
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
