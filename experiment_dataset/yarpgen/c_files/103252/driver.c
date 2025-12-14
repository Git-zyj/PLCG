#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3106331760U;
unsigned int var_7 = 2385839169U;
unsigned int var_11 = 849161303U;
int zero = 0;
unsigned int var_19 = 95799439U;
unsigned int var_20 = 1291082398U;
unsigned int var_21 = 3725542583U;
unsigned int var_22 = 3034758182U;
unsigned int var_23 = 1552235334U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
