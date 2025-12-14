#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)33765;
long long int var_6 = 7458687470615714211LL;
short var_14 = (short)-7435;
short var_15 = (short)-9222;
int zero = 0;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)-36;
signed char var_21 = (signed char)29;
long long int var_22 = -1738702477358104316LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
