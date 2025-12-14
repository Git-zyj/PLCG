#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 4004916960U;
long long int var_5 = 8805479411637355641LL;
long long int var_14 = 2189191823124435236LL;
int zero = 0;
int var_20 = 1754150768;
unsigned int var_21 = 2450612302U;
signed char var_22 = (signed char)-48;
long long int var_23 = -1691357588862269547LL;
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
