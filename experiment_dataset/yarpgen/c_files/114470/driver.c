#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -101915720;
short var_7 = (short)13805;
short var_10 = (short)11496;
int zero = 0;
signed char var_12 = (signed char)91;
short var_13 = (short)32495;
short var_14 = (short)-21926;
int var_15 = -722355938;
unsigned int var_16 = 3186617755U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
