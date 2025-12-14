#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1019846916;
short var_6 = (short)20189;
int var_10 = 357142811;
int var_12 = -1668971705;
long long int var_13 = 3690807409089522754LL;
unsigned char var_14 = (unsigned char)250;
int zero = 0;
short var_15 = (short)28338;
int var_16 = -730713300;
short var_17 = (short)22615;
unsigned char var_18 = (unsigned char)173;
int var_19 = -1836822940;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
