#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)29447;
int var_4 = -1836363757;
unsigned short var_7 = (unsigned short)44408;
unsigned int var_14 = 3547192957U;
int zero = 0;
unsigned int var_15 = 802207867U;
int var_16 = 1165299639;
int var_17 = -215461569;
signed char var_18 = (signed char)69;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
