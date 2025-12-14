#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -4472822202571240864LL;
long long int var_7 = -390649507240893865LL;
long long int var_11 = -710587236890166039LL;
int zero = 0;
long long int var_20 = -8896244679292999529LL;
long long int var_21 = 4292304185691463351LL;
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
