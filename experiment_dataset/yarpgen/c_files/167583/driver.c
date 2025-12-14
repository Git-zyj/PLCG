#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)2179;
signed char var_2 = (signed char)54;
short var_7 = (short)24643;
signed char var_9 = (signed char)53;
int zero = 0;
unsigned char var_12 = (unsigned char)212;
int var_13 = 2032978650;
short var_14 = (short)28962;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
