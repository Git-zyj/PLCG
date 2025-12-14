#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)11812;
signed char var_5 = (signed char)17;
unsigned char var_13 = (unsigned char)201;
unsigned short var_15 = (unsigned short)64134;
int zero = 0;
short var_17 = (short)2328;
unsigned short var_18 = (unsigned short)6324;
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
