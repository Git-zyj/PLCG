#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -6373445016942236277LL;
signed char var_11 = (signed char)-113;
unsigned long long int var_13 = 4568492541445883572ULL;
int zero = 0;
int var_14 = -1085237358;
int var_15 = 1377703757;
signed char var_16 = (signed char)105;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
