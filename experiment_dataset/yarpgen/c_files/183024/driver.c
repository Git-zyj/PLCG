#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)65;
unsigned short var_8 = (unsigned short)9684;
signed char var_12 = (signed char)100;
short var_13 = (short)-8597;
short var_15 = (short)26819;
int zero = 0;
unsigned short var_19 = (unsigned short)30065;
unsigned int var_20 = 729947282U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
