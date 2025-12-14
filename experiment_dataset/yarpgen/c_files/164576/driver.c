#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-28378;
unsigned char var_5 = (unsigned char)79;
signed char var_9 = (signed char)-5;
signed char var_11 = (signed char)31;
int zero = 0;
unsigned char var_14 = (unsigned char)101;
unsigned short var_15 = (unsigned short)35251;
unsigned char var_16 = (unsigned char)144;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
