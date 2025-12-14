#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)2016;
signed char var_3 = (signed char)110;
signed char var_8 = (signed char)36;
signed char var_11 = (signed char)48;
int zero = 0;
unsigned int var_12 = 1173017966U;
short var_13 = (short)24708;
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
