#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-30875;
signed char var_5 = (signed char)15;
unsigned char var_8 = (unsigned char)187;
signed char var_15 = (signed char)120;
int zero = 0;
long long int var_20 = -581567743386793247LL;
short var_21 = (short)-20938;
unsigned long long int var_22 = 16768668627118326808ULL;
short var_23 = (short)29552;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
