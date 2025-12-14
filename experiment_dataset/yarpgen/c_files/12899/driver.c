#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 3534110800U;
unsigned char var_6 = (unsigned char)150;
int var_9 = 1866557427;
unsigned int var_12 = 161268144U;
unsigned int var_13 = 2274582754U;
int zero = 0;
int var_17 = -1084163589;
int var_18 = 1026854556;
int var_19 = 750512376;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
