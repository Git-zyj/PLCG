#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_15 = 3207956379U;
short var_16 = (short)-17081;
int zero = 0;
unsigned long long int var_17 = 2274225681378582765ULL;
short var_18 = (short)11279;
signed char var_19 = (signed char)-51;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
