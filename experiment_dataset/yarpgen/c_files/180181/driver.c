#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)6299;
signed char var_2 = (signed char)-77;
unsigned long long int var_4 = 9037066695100728671ULL;
int zero = 0;
signed char var_11 = (signed char)-33;
unsigned int var_12 = 2023038036U;
unsigned short var_13 = (unsigned short)38614;
unsigned short var_14 = (unsigned short)38397;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
