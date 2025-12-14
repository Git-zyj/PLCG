#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3102712822U;
unsigned short var_10 = (unsigned short)35850;
int zero = 0;
unsigned long long int var_13 = 7152355493287215684ULL;
unsigned long long int var_14 = 17420844033292535217ULL;
unsigned int var_15 = 1718590240U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
