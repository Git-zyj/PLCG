#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)25;
int var_10 = -421346832;
unsigned char var_12 = (unsigned char)30;
int zero = 0;
long long int var_13 = 7658009626185412958LL;
long long int var_14 = -9167487291479031384LL;
unsigned short var_15 = (unsigned short)42855;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
