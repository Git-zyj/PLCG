#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -188784075;
unsigned char var_2 = (unsigned char)234;
signed char var_5 = (signed char)95;
short var_9 = (short)18639;
int zero = 0;
unsigned char var_14 = (unsigned char)175;
int var_15 = 568410665;
signed char var_16 = (signed char)-42;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
