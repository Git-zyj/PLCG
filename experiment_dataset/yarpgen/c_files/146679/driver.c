#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)8268;
long long int var_4 = 8991910970899785927LL;
unsigned int var_10 = 1473254463U;
int zero = 0;
unsigned long long int var_11 = 14867968328737165757ULL;
unsigned char var_12 = (unsigned char)125;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
