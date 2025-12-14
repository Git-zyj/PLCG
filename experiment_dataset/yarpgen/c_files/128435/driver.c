#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)32110;
unsigned int var_1 = 738979697U;
short var_3 = (short)-20976;
unsigned int var_4 = 1228020599U;
unsigned int var_12 = 3471129437U;
int zero = 0;
short var_13 = (short)-8560;
short var_14 = (short)29390;
void init() {
}

void checksum() {
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
