#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -402468702;
unsigned int var_8 = 2064550683U;
unsigned char var_9 = (unsigned char)87;
short var_11 = (short)-13250;
int zero = 0;
long long int var_15 = 8588155488126792870LL;
unsigned char var_16 = (unsigned char)174;
long long int var_17 = -5649991285136646635LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
