#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)25406;
long long int var_8 = 891083440230615470LL;
int var_10 = 1641379;
unsigned int var_11 = 1840662046U;
unsigned int var_12 = 4039323523U;
int zero = 0;
unsigned int var_15 = 855439621U;
int var_16 = 875927448;
signed char var_17 = (signed char)-42;
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
