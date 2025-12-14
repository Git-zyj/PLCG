#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13625395323184645001ULL;
unsigned char var_2 = (unsigned char)173;
unsigned int var_4 = 1651303503U;
unsigned char var_5 = (unsigned char)14;
short var_7 = (short)24557;
unsigned char var_10 = (unsigned char)252;
int zero = 0;
int var_12 = -96224376;
unsigned long long int var_13 = 6968725884550396935ULL;
unsigned short var_14 = (unsigned short)26469;
unsigned long long int var_15 = 4027077059751215796ULL;
short var_16 = (short)17485;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
