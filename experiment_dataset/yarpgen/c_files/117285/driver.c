#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -232429560;
unsigned int var_4 = 1736995444U;
int var_11 = -1487714867;
long long int var_12 = -741789485666231008LL;
int var_13 = 1578704235;
unsigned int var_14 = 3109684047U;
long long int var_16 = -6755944445113158312LL;
int zero = 0;
_Bool var_20 = (_Bool)1;
short var_21 = (short)-23112;
unsigned int var_22 = 3748452391U;
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
