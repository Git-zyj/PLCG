#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2127874311279222059LL;
int var_3 = -821157031;
signed char var_6 = (signed char)-22;
unsigned int var_10 = 3819525451U;
int zero = 0;
unsigned long long int var_13 = 11462205375801382073ULL;
short var_14 = (short)3682;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
