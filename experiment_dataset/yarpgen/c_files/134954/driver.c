#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_15 = 419958096154861574LL;
short var_19 = (short)30073;
int zero = 0;
unsigned int var_20 = 3054324357U;
short var_21 = (short)17477;
signed char var_22 = (signed char)-5;
signed char var_23 = (signed char)-86;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
