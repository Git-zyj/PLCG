#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)30917;
unsigned short var_12 = (unsigned short)40469;
unsigned int var_13 = 1147838473U;
int zero = 0;
unsigned short var_20 = (unsigned short)45764;
unsigned int var_21 = 1831762054U;
unsigned short var_22 = (unsigned short)19216;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
