#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -5242534033728998249LL;
short var_4 = (short)1966;
long long int var_8 = 4608916429330484057LL;
long long int var_13 = 8172747605824734451LL;
long long int var_15 = -2101675248562304465LL;
short var_17 = (short)23197;
int zero = 0;
short var_20 = (short)-23597;
long long int var_21 = -4777625350866478817LL;
long long int var_22 = 1010855050839272480LL;
void init() {
}

void checksum() {
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
