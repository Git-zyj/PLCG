#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)1;
unsigned long long int var_8 = 3667602035112246131ULL;
long long int var_11 = 3540567842726418547LL;
int var_13 = -1227040262;
int zero = 0;
unsigned int var_14 = 2056458910U;
unsigned long long int var_15 = 11062546177273085482ULL;
unsigned long long int var_16 = 12850969531173998308ULL;
short var_17 = (short)31199;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
