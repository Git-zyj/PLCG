#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 3422943787623273719ULL;
unsigned int var_14 = 3515285058U;
unsigned short var_15 = (unsigned short)51187;
int zero = 0;
unsigned char var_16 = (unsigned char)54;
short var_17 = (short)12149;
unsigned int var_18 = 2810834980U;
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
