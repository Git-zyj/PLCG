#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -2986223347648228210LL;
unsigned int var_6 = 3073428099U;
unsigned char var_14 = (unsigned char)86;
int var_19 = 1095175620;
int zero = 0;
long long int var_20 = 8889902125777421042LL;
long long int var_21 = -6817638408548367022LL;
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
