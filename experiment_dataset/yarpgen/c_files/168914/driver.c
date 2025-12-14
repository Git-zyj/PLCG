#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 7826111136641358276LL;
signed char var_14 = (signed char)3;
int var_15 = 221239805;
int zero = 0;
long long int var_16 = 5594506943730192499LL;
long long int var_17 = 2869944805942567928LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
