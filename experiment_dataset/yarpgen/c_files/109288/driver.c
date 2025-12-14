#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1425769924;
unsigned char var_4 = (unsigned char)64;
unsigned int var_7 = 2364716096U;
unsigned int var_8 = 1129564128U;
int var_9 = -405936826;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned int var_14 = 1698098519U;
_Bool var_15 = (_Bool)0;
int var_16 = -241652202;
unsigned char var_17 = (unsigned char)78;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
