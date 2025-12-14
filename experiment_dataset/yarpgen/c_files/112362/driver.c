#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 377007438U;
unsigned int var_10 = 898258069U;
unsigned int var_12 = 2979139691U;
unsigned short var_15 = (unsigned short)61215;
int zero = 0;
int var_16 = -1539053479;
int var_17 = -1859382681;
void init() {
}

void checksum() {
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
