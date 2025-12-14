#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)15648;
short var_4 = (short)17642;
short var_16 = (short)15817;
long long int var_18 = -4819316621159912144LL;
int zero = 0;
long long int var_19 = -5289838791485185766LL;
long long int var_20 = 1133365302853823331LL;
short var_21 = (short)-12739;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
