#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15214066601798017385ULL;
unsigned char var_12 = (unsigned char)105;
short var_14 = (short)-320;
int zero = 0;
unsigned int var_16 = 1313017539U;
unsigned short var_17 = (unsigned short)54488;
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
