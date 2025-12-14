#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 3349270827U;
unsigned int var_7 = 1528528378U;
unsigned int var_10 = 893628830U;
unsigned long long int var_12 = 10848698323532647039ULL;
short var_13 = (short)8056;
int zero = 0;
signed char var_15 = (signed char)94;
long long int var_16 = -5838306226742461753LL;
short var_17 = (short)25865;
short var_18 = (short)3486;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
