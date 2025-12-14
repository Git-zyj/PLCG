#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)38560;
int var_5 = 1962129833;
short var_8 = (short)-17971;
int var_9 = 592609698;
int zero = 0;
unsigned short var_10 = (unsigned short)30103;
unsigned short var_11 = (unsigned short)50493;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
