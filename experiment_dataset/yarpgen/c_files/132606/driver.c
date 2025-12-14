#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1626552756;
unsigned int var_3 = 434148210U;
unsigned int var_7 = 553306038U;
unsigned int var_10 = 2331355193U;
unsigned int var_11 = 3224929413U;
int zero = 0;
unsigned int var_12 = 4074471879U;
unsigned int var_13 = 2260817878U;
unsigned int var_14 = 3885795456U;
void init() {
}

void checksum() {
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
