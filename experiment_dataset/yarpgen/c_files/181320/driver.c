#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_8 = -922339836;
long long int var_11 = -6589373563885553361LL;
int var_13 = 1373520578;
int zero = 0;
long long int var_14 = -6189649950586722341LL;
unsigned int var_15 = 2484606364U;
signed char var_16 = (signed char)23;
void init() {
}

void checksum() {
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
