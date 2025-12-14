#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2392469005U;
long long int var_10 = 7376590055222579693LL;
long long int var_11 = -1856173643108048071LL;
int zero = 0;
int var_12 = 76677054;
unsigned char var_13 = (unsigned char)132;
void init() {
}

void checksum() {
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
