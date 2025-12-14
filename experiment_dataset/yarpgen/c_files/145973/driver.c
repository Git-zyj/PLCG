#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3270458887757653944ULL;
int var_6 = -867249051;
long long int var_7 = 5918317422405686721LL;
short var_10 = (short)24374;
long long int var_13 = 392067057831977948LL;
int var_15 = 1436291417;
int zero = 0;
long long int var_16 = 1389456823209975944LL;
signed char var_17 = (signed char)16;
signed char var_18 = (signed char)61;
void init() {
}

void checksum() {
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
