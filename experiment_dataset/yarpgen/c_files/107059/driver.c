#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)63184;
int var_2 = 2136863200;
int var_3 = -472481558;
short var_7 = (short)25875;
short var_8 = (short)9411;
int var_10 = 812203979;
int zero = 0;
unsigned short var_12 = (unsigned short)393;
unsigned char var_13 = (unsigned char)76;
long long int var_14 = 7861793259423575246LL;
unsigned char var_15 = (unsigned char)111;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
