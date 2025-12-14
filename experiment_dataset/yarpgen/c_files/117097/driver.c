#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_11 = -5716937832117600741LL;
signed char var_13 = (signed char)-9;
signed char var_14 = (signed char)-15;
unsigned int var_15 = 2017031545U;
unsigned int var_16 = 1628444406U;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 491212725U;
void init() {
}

void checksum() {
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
