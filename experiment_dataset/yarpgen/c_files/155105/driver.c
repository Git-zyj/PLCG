#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1054848914;
unsigned int var_9 = 1826346473U;
signed char var_10 = (signed char)102;
int zero = 0;
unsigned int var_15 = 1104755616U;
unsigned short var_16 = (unsigned short)60383;
void init() {
}

void checksum() {
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
