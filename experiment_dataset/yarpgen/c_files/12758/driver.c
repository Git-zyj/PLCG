#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)215;
short var_8 = (short)-31581;
int var_12 = -1639791988;
int var_15 = -1447204064;
int zero = 0;
unsigned long long int var_20 = 15873515524306033811ULL;
unsigned int var_21 = 3962573686U;
void init() {
}

void checksum() {
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
