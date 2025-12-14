#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1815883238U;
unsigned long long int var_8 = 8720226008195117637ULL;
int zero = 0;
unsigned long long int var_11 = 3167983920135595986ULL;
unsigned long long int var_12 = 12663678827185556631ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
