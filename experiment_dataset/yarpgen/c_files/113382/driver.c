#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2990343870U;
unsigned char var_5 = (unsigned char)86;
unsigned char var_6 = (unsigned char)97;
long long int var_8 = -559346646207176383LL;
unsigned char var_9 = (unsigned char)151;
unsigned int var_10 = 474568328U;
unsigned char var_11 = (unsigned char)248;
int zero = 0;
unsigned char var_12 = (unsigned char)172;
unsigned int var_13 = 3688830370U;
unsigned int var_14 = 1495774700U;
unsigned int var_15 = 380724851U;
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
