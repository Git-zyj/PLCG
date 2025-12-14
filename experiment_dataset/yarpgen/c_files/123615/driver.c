#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3724175334U;
unsigned int var_1 = 1978245338U;
long long int var_4 = -2841124856490557485LL;
signed char var_6 = (signed char)-54;
long long int var_7 = -3192684023504369995LL;
unsigned int var_8 = 2066477891U;
signed char var_10 = (signed char)29;
int zero = 0;
unsigned int var_13 = 2211993084U;
signed char var_14 = (signed char)10;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
