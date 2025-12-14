#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -826968115;
unsigned int var_5 = 482855645U;
unsigned int var_9 = 3242761507U;
unsigned int var_13 = 3953431180U;
unsigned int var_14 = 1013125709U;
unsigned int var_15 = 3520753804U;
int zero = 0;
unsigned int var_16 = 2753234284U;
unsigned int var_17 = 887133494U;
unsigned int var_18 = 1002124540U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
