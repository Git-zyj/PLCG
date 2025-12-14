#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)119;
unsigned int var_4 = 3447203190U;
signed char var_5 = (signed char)48;
unsigned int var_6 = 3077751027U;
int var_7 = 1020886942;
int var_9 = -189620390;
unsigned int var_10 = 64235000U;
short var_11 = (short)20861;
int zero = 0;
short var_13 = (short)15202;
int var_14 = -367729598;
unsigned long long int var_15 = 14717171294849565982ULL;
int var_16 = 1992666595;
void init() {
}

void checksum() {
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
