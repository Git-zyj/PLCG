#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -413280455;
unsigned short var_6 = (unsigned short)14248;
int var_7 = -382216578;
unsigned short var_11 = (unsigned short)54505;
signed char var_12 = (signed char)67;
int zero = 0;
unsigned long long int var_13 = 15044472410484944950ULL;
unsigned int var_14 = 1487155163U;
unsigned int var_15 = 1855532346U;
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
