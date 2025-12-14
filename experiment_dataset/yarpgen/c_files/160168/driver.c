#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1827622249;
unsigned char var_3 = (unsigned char)39;
int var_4 = -1388464785;
unsigned short var_5 = (unsigned short)35091;
unsigned short var_6 = (unsigned short)48126;
unsigned short var_10 = (unsigned short)7075;
unsigned short var_11 = (unsigned short)31799;
unsigned long long int var_12 = 15033360246934671982ULL;
unsigned short var_13 = (unsigned short)53077;
int zero = 0;
unsigned int var_15 = 3456510437U;
unsigned long long int var_16 = 9267736294398452284ULL;
int var_17 = -1047799136;
void init() {
}

void checksum() {
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
