#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1561618611U;
int var_1 = -2069483311;
unsigned long long int var_4 = 10445470923923017113ULL;
unsigned long long int var_5 = 193789720090121909ULL;
short var_8 = (short)-31394;
short var_9 = (short)2234;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned long long int var_11 = 15457146952356790466ULL;
unsigned int var_12 = 3065147462U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
