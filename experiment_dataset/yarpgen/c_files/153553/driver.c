#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 374816998;
short var_3 = (short)3382;
unsigned long long int var_5 = 6513688487977367559ULL;
unsigned long long int var_7 = 6014942516812177909ULL;
unsigned long long int var_8 = 11257484846341512812ULL;
int zero = 0;
int var_10 = 487850257;
int var_11 = -597029107;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
