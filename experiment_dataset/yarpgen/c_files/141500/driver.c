#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-32;
int var_2 = -510153951;
unsigned int var_5 = 864012294U;
int var_6 = 700832011;
long long int var_8 = 2510451749320448080LL;
int var_9 = -1869511345;
int zero = 0;
int var_20 = -597284757;
int var_21 = -302309261;
int var_22 = -586216850;
void init() {
}

void checksum() {
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
