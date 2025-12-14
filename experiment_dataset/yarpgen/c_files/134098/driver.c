#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)20469;
unsigned char var_7 = (unsigned char)3;
unsigned short var_8 = (unsigned short)3526;
unsigned char var_9 = (unsigned char)132;
int zero = 0;
unsigned short var_15 = (unsigned short)34626;
unsigned short var_16 = (unsigned short)20573;
void init() {
}

void checksum() {
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
