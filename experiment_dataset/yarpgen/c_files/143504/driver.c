#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)47;
short var_1 = (short)-25653;
_Bool var_3 = (_Bool)1;
signed char var_6 = (signed char)91;
short var_7 = (short)-30681;
unsigned long long int var_8 = 17492231802910231824ULL;
short var_9 = (short)-24700;
unsigned long long int var_11 = 15199606071467684018ULL;
short var_14 = (short)5579;
int zero = 0;
int var_15 = -142514169;
int var_16 = -369007533;
short var_17 = (short)-31989;
unsigned long long int var_18 = 3829606336691513891ULL;
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
