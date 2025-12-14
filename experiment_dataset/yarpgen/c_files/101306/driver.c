#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15318176857946398795ULL;
unsigned long long int var_3 = 10738160401472567265ULL;
unsigned short var_6 = (unsigned short)22993;
long long int var_7 = -2971101683404558313LL;
unsigned int var_10 = 1552828529U;
unsigned int var_11 = 4215992154U;
unsigned short var_13 = (unsigned short)2666;
unsigned int var_14 = 3714867442U;
_Bool var_15 = (_Bool)0;
int var_17 = 1155961268;
int var_18 = -1101178106;
unsigned long long int var_19 = 5293790094802283780ULL;
int zero = 0;
unsigned int var_20 = 4222883125U;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
