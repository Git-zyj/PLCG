#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2270174586U;
unsigned long long int var_7 = 8350598568130240980ULL;
short var_13 = (short)23324;
int zero = 0;
int var_16 = -657586228;
unsigned short var_17 = (unsigned short)58049;
short var_18 = (short)30427;
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
