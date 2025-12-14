#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4290555017U;
unsigned long long int var_3 = 6567380135624776009ULL;
short var_9 = (short)-4370;
long long int var_10 = 2378577623643466034LL;
unsigned long long int var_12 = 3457181443689162807ULL;
int zero = 0;
unsigned int var_13 = 3995271314U;
short var_14 = (short)-32310;
short var_15 = (short)-31870;
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
