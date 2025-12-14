#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 15358425404577119609ULL;
long long int var_7 = 7543871866090890451LL;
int zero = 0;
unsigned short var_11 = (unsigned short)1860;
unsigned int var_12 = 3719396239U;
unsigned long long int var_13 = 12101889081666837155ULL;
unsigned long long int var_14 = 7357861833664587877ULL;
long long int var_15 = 3900024391004026816LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
