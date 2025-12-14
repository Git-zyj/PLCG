#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)10382;
short var_2 = (short)14291;
long long int var_4 = 2519249926386911616LL;
unsigned int var_9 = 1235726550U;
int zero = 0;
signed char var_12 = (signed char)83;
unsigned long long int var_13 = 1561912121212434817ULL;
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
