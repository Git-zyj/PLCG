#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)157;
int var_5 = 1438927943;
unsigned int var_6 = 1465277596U;
unsigned char var_11 = (unsigned char)57;
unsigned int var_12 = 262268514U;
unsigned int var_17 = 4077554096U;
int zero = 0;
short var_18 = (short)-27122;
unsigned char var_19 = (unsigned char)241;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
