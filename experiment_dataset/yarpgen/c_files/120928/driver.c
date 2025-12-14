#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10069708763202822307ULL;
long long int var_5 = 7139976981619220490LL;
int zero = 0;
unsigned short var_17 = (unsigned short)43782;
unsigned int var_18 = 1656866838U;
unsigned short var_19 = (unsigned short)51344;
signed char var_20 = (signed char)53;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
