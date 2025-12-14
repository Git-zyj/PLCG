#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 1186619041U;
int var_9 = -2011100931;
signed char var_13 = (signed char)21;
int zero = 0;
int var_20 = -229429285;
short var_21 = (short)19462;
signed char var_22 = (signed char)-115;
unsigned int var_23 = 2277340807U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
