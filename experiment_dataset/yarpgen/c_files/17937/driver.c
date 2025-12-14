#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)22;
unsigned char var_5 = (unsigned char)128;
unsigned short var_6 = (unsigned short)20258;
int zero = 0;
long long int var_12 = -7365804833834620501LL;
unsigned int var_13 = 3076721230U;
unsigned short var_14 = (unsigned short)47144;
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
