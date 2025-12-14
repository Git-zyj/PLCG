#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8915695231793706530LL;
signed char var_4 = (signed char)-39;
int var_6 = 44041355;
signed char var_8 = (signed char)79;
int var_11 = 329146137;
int var_14 = 1377233007;
long long int var_15 = 3470862685175296371LL;
int zero = 0;
long long int var_16 = 4205394245562808059LL;
short var_17 = (short)19057;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
