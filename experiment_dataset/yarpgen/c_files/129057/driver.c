#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1381426678;
unsigned long long int var_7 = 12637927642166106946ULL;
long long int var_14 = -8590732877985104911LL;
unsigned int var_17 = 336132985U;
int zero = 0;
short var_19 = (short)-13640;
long long int var_20 = -2848991767111618795LL;
int var_21 = -316694611;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
