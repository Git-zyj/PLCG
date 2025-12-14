#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2408862370U;
unsigned int var_2 = 2708040579U;
unsigned int var_5 = 3384902166U;
unsigned int var_10 = 790191877U;
int var_12 = 738460000;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 2574198955U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
