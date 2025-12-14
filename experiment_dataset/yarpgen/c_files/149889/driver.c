#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)213;
unsigned char var_4 = (unsigned char)7;
unsigned short var_12 = (unsigned short)3114;
signed char var_13 = (signed char)35;
signed char var_15 = (signed char)87;
int zero = 0;
signed char var_16 = (signed char)-53;
int var_17 = -1689330036;
void init() {
}

void checksum() {
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
