#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2539198688U;
_Bool var_5 = (_Bool)0;
signed char var_8 = (signed char)-112;
_Bool var_9 = (_Bool)0;
short var_10 = (short)18069;
int zero = 0;
int var_12 = 891320230;
int var_13 = -531234802;
void init() {
}

void checksum() {
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
