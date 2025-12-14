#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-71;
short var_1 = (short)24720;
unsigned int var_4 = 3533652633U;
unsigned short var_7 = (unsigned short)37239;
unsigned int var_14 = 1068641527U;
int zero = 0;
signed char var_15 = (signed char)(-127 - 1);
short var_16 = (short)-16474;
signed char var_17 = (signed char)72;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
