#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-64;
short var_15 = (short)23567;
unsigned int var_17 = 277453384U;
unsigned long long int var_19 = 18057983619189023956ULL;
int zero = 0;
unsigned int var_20 = 4103809046U;
int var_21 = -281392924;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
