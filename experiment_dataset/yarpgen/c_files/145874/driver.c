#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)93;
unsigned int var_7 = 1591310529U;
unsigned int var_18 = 1652593047U;
int zero = 0;
unsigned long long int var_20 = 5311375067323935371ULL;
int var_21 = -523253912;
int var_22 = 1315021051;
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
