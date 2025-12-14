#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)20328;
signed char var_6 = (signed char)86;
long long int var_14 = -3431574449452811277LL;
int zero = 0;
long long int var_17 = -854161361756945891LL;
signed char var_18 = (signed char)17;
long long int var_19 = -1721471138700263119LL;
unsigned int var_20 = 3916039279U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
