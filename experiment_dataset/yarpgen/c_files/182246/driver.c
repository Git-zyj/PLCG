#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1433555179U;
long long int var_2 = -2083971508713379125LL;
short var_5 = (short)-25035;
unsigned long long int var_7 = 2886512025083175439ULL;
long long int var_12 = 8119673277989843237LL;
int zero = 0;
short var_13 = (short)4580;
signed char var_14 = (signed char)102;
unsigned long long int var_15 = 6571817798741936939ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
