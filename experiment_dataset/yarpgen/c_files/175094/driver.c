#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 808967771;
int var_6 = -1007333771;
unsigned long long int var_9 = 16539551336429863898ULL;
unsigned int var_15 = 815487701U;
int zero = 0;
signed char var_16 = (signed char)79;
unsigned char var_17 = (unsigned char)97;
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
