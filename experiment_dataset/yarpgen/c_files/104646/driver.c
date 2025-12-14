#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 3581112814U;
unsigned int var_8 = 1208450687U;
unsigned char var_10 = (unsigned char)158;
int zero = 0;
unsigned char var_14 = (unsigned char)232;
unsigned long long int var_15 = 15595066307772439587ULL;
long long int var_16 = -4719381551411707942LL;
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
