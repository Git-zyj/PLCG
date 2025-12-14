#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
long long int var_4 = 2453864510116827334LL;
int var_6 = 101085571;
int var_7 = -488365821;
long long int var_9 = 1585541479863741277LL;
long long int var_10 = -137357775069110560LL;
int var_11 = 461598537;
long long int var_12 = 2921526906684540952LL;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 5166113204992456468ULL;
long long int var_16 = 5352803840266150226LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
