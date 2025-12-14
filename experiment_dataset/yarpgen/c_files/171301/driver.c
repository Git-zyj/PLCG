#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)18070;
_Bool var_1 = (_Bool)0;
unsigned char var_6 = (unsigned char)161;
unsigned long long int var_10 = 18005283059499869955ULL;
short var_12 = (short)-2646;
short var_13 = (short)-32193;
int zero = 0;
unsigned int var_14 = 4118039171U;
unsigned char var_15 = (unsigned char)61;
unsigned char var_16 = (unsigned char)233;
unsigned int var_17 = 4078052645U;
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
