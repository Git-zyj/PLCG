#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 686547463U;
unsigned long long int var_10 = 7122101372560205151ULL;
unsigned long long int var_11 = 7094695137257979821ULL;
unsigned int var_12 = 3829026509U;
int zero = 0;
short var_15 = (short)-20445;
unsigned int var_16 = 3580397621U;
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
