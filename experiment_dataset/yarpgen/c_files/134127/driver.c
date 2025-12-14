#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-88;
unsigned long long int var_7 = 6511214134878174255ULL;
unsigned char var_13 = (unsigned char)27;
int zero = 0;
unsigned short var_17 = (unsigned short)30904;
short var_18 = (short)24584;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
