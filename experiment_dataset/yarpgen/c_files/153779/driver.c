#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3713869287393504951ULL;
unsigned long long int var_13 = 3618632090745454068ULL;
int zero = 0;
unsigned long long int var_20 = 3269780495445518376ULL;
long long int var_21 = 4291714495941249976LL;
void init() {
}

void checksum() {
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
