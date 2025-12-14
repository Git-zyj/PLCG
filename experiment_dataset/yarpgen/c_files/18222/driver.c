#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)113;
unsigned int var_8 = 2271298171U;
unsigned char var_10 = (unsigned char)221;
int var_13 = -1064345003;
unsigned int var_15 = 456607300U;
unsigned char var_17 = (unsigned char)215;
int zero = 0;
unsigned int var_19 = 2062071152U;
int var_20 = -608931823;
int var_21 = -658381720;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
