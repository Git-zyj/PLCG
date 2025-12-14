#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -147412134;
signed char var_7 = (signed char)84;
unsigned long long int var_9 = 15025626987412697694ULL;
signed char var_11 = (signed char)-49;
short var_18 = (short)-8652;
int zero = 0;
unsigned long long int var_19 = 4668904783166988983ULL;
unsigned int var_20 = 1168095141U;
unsigned int var_21 = 3156595339U;
long long int var_22 = 2655448900724176113LL;
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
