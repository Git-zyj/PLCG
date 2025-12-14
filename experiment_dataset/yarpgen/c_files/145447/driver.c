#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_4 = (short)-29734;
short var_5 = (short)6667;
long long int var_6 = -3717865620100338580LL;
unsigned int var_10 = 1692847778U;
int zero = 0;
unsigned int var_19 = 1916850074U;
short var_20 = (short)17541;
long long int var_21 = 1981439525586636332LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
