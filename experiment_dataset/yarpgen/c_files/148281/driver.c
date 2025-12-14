#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-27294;
unsigned int var_3 = 2725744187U;
int var_8 = 686854139;
unsigned int var_10 = 2595905349U;
int zero = 0;
signed char var_19 = (signed char)119;
unsigned int var_20 = 1609142135U;
short var_21 = (short)31346;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
