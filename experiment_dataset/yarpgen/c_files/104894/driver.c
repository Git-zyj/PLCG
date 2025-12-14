#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3148232968U;
unsigned long long int var_8 = 10030217924976550176ULL;
unsigned long long int var_14 = 18133709260475268209ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)153;
long long int var_21 = -2815540420243849857LL;
int var_22 = -1201250927;
int var_23 = -211649098;
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
