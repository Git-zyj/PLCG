#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 1052588207062347890LL;
int var_4 = -1051138592;
signed char var_10 = (signed char)-112;
long long int var_14 = -7608872713880761312LL;
int zero = 0;
int var_19 = 1852921535;
int var_20 = -1911890159;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
