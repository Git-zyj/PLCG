#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1422066369;
unsigned long long int var_1 = 2230534657333108475ULL;
unsigned char var_4 = (unsigned char)77;
unsigned long long int var_5 = 3642497241604059701ULL;
unsigned long long int var_11 = 7177366519326059338ULL;
int zero = 0;
short var_14 = (short)-9558;
unsigned long long int var_15 = 11188275643155041658ULL;
unsigned short var_16 = (unsigned short)44853;
void init() {
}

void checksum() {
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
