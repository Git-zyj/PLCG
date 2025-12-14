#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_11 = 1692937141U;
signed char var_12 = (signed char)-115;
int zero = 0;
unsigned int var_15 = 1642841833U;
short var_16 = (short)-5818;
long long int var_17 = 6809006795238736467LL;
long long int var_18 = -8811625286620878705LL;
short var_19 = (short)18836;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
