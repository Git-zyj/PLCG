#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_5 = 1703662002934190102ULL;
unsigned int var_6 = 3358609914U;
int var_8 = 1571947830;
int zero = 0;
int var_10 = -870256012;
unsigned int var_11 = 2605178663U;
unsigned long long int var_12 = 831241808586489332ULL;
unsigned int var_13 = 2373736951U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
