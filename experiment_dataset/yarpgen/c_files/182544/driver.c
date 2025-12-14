#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14374982540742952807ULL;
long long int var_2 = -3915174563844165873LL;
signed char var_6 = (signed char)124;
long long int var_8 = 3902033072702709685LL;
long long int var_12 = -758206339654184213LL;
long long int var_13 = 7769703767959004236LL;
unsigned char var_14 = (unsigned char)101;
int zero = 0;
short var_15 = (short)-3011;
long long int var_16 = -2775410681971469193LL;
long long int var_17 = 1056895357507287422LL;
void init() {
}

void checksum() {
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
