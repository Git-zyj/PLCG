#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1409730945U;
unsigned long long int var_5 = 15680156853296991676ULL;
unsigned char var_10 = (unsigned char)239;
int zero = 0;
unsigned int var_14 = 3402315603U;
unsigned int var_15 = 3102794034U;
int var_16 = 1583023079;
unsigned short var_17 = (unsigned short)28523;
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
