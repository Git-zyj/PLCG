#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1086553430;
long long int var_5 = -5936891352207205448LL;
signed char var_6 = (signed char)97;
short var_9 = (short)-13829;
int zero = 0;
int var_15 = -757742914;
short var_16 = (short)13957;
void init() {
}

void checksum() {
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
