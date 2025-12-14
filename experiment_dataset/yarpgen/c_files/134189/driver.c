#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)19239;
long long int var_2 = 1555860499669716140LL;
long long int var_7 = 3518256503266428398LL;
unsigned short var_8 = (unsigned short)5834;
int zero = 0;
unsigned short var_11 = (unsigned short)48032;
long long int var_12 = 1618589503547929557LL;
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
