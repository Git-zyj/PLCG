#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)74;
unsigned char var_6 = (unsigned char)215;
unsigned long long int var_10 = 2049665776219434606ULL;
int zero = 0;
short var_16 = (short)-13297;
unsigned int var_17 = 1941161174U;
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
