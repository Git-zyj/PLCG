#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1127599006U;
short var_3 = (short)13864;
unsigned char var_4 = (unsigned char)229;
unsigned int var_7 = 3918279090U;
int zero = 0;
int var_12 = 475553949;
unsigned char var_13 = (unsigned char)245;
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
