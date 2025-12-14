#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_11 = -1850045398;
unsigned char var_13 = (unsigned char)2;
unsigned short var_19 = (unsigned short)49134;
int zero = 0;
unsigned int var_20 = 3937905913U;
unsigned char var_21 = (unsigned char)213;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
