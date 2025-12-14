#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 2380913528U;
signed char var_10 = (signed char)23;
signed char var_11 = (signed char)43;
int zero = 0;
unsigned long long int var_15 = 15472436652775849033ULL;
short var_16 = (short)-6242;
short var_17 = (short)-2709;
signed char var_18 = (signed char)-22;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
