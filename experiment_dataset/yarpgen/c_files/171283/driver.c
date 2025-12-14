#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-113;
int var_1 = -277372303;
int var_3 = 2021418301;
unsigned char var_7 = (unsigned char)45;
int zero = 0;
signed char var_11 = (signed char)-33;
short var_12 = (short)-15232;
int var_13 = -672436257;
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
