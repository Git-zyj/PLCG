#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2031220803U;
signed char var_3 = (signed char)-122;
unsigned short var_9 = (unsigned short)21408;
unsigned int var_10 = 1082262021U;
int zero = 0;
signed char var_11 = (signed char)82;
int var_12 = -649644544;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
