#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)45;
int var_3 = 1520537310;
int var_6 = 340584472;
unsigned int var_13 = 1640944121U;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 10228882288237298592ULL;
_Bool var_21 = (_Bool)1;
int var_22 = 287442232;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
