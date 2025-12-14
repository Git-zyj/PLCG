#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)57852;
unsigned int var_7 = 225228554U;
unsigned short var_12 = (unsigned short)25429;
int zero = 0;
unsigned char var_14 = (unsigned char)85;
unsigned char var_15 = (unsigned char)4;
long long int var_16 = -5842734327759857298LL;
signed char var_17 = (signed char)123;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
