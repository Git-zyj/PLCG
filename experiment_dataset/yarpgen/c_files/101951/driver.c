#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = 1303803705;
long long int var_12 = 4782634179927859351LL;
int var_13 = 972708405;
int zero = 0;
signed char var_15 = (signed char)38;
short var_16 = (short)26879;
long long int var_17 = -282342929545462487LL;
unsigned int var_18 = 1529252524U;
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
