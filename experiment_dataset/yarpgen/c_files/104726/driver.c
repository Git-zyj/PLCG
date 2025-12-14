#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-95;
long long int var_3 = 4386338451940693352LL;
unsigned long long int var_6 = 6897520973459234807ULL;
unsigned short var_7 = (unsigned short)41243;
int zero = 0;
unsigned short var_11 = (unsigned short)11043;
unsigned int var_12 = 1674037245U;
short var_13 = (short)-7216;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
