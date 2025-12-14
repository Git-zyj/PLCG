#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-36;
unsigned short var_5 = (unsigned short)49197;
_Bool var_6 = (_Bool)1;
unsigned long long int var_8 = 7031788324422337815ULL;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned int var_11 = 2812044482U;
unsigned long long int var_12 = 1417465978894822467ULL;
long long int var_13 = -4973067459870537570LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
