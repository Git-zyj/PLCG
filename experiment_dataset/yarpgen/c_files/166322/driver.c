#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)11;
unsigned int var_5 = 521202182U;
short var_7 = (short)546;
signed char var_10 = (signed char)-119;
int zero = 0;
short var_11 = (short)-13892;
unsigned char var_12 = (unsigned char)138;
short var_13 = (short)-10724;
unsigned int var_14 = 2736259484U;
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
