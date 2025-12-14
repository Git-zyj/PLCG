#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)85;
unsigned int var_4 = 1813033462U;
short var_5 = (short)14276;
unsigned char var_7 = (unsigned char)141;
unsigned long long int var_10 = 3499405044681824721ULL;
unsigned long long int var_17 = 5023423868990502846ULL;
int zero = 0;
unsigned int var_20 = 318143044U;
int var_21 = -791251346;
unsigned long long int var_22 = 3173354132699429810ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
