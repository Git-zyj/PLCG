#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -574134245;
unsigned short var_7 = (unsigned short)34940;
signed char var_16 = (signed char)-6;
unsigned long long int var_17 = 3576806280312013307ULL;
int zero = 0;
signed char var_18 = (signed char)86;
signed char var_19 = (signed char)-22;
void init() {
}

void checksum() {
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
