#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)11988;
unsigned short var_5 = (unsigned short)2059;
signed char var_9 = (signed char)39;
int zero = 0;
short var_12 = (short)-9087;
short var_13 = (short)-7066;
unsigned char var_14 = (unsigned char)16;
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
