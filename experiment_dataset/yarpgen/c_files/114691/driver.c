#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-41;
unsigned short var_5 = (unsigned short)17178;
unsigned int var_8 = 3330006215U;
short var_9 = (short)-21284;
int zero = 0;
short var_13 = (short)-1025;
int var_14 = 210216024;
unsigned int var_15 = 705121405U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
