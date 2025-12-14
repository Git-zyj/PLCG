#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -837005631;
unsigned char var_4 = (unsigned char)246;
unsigned short var_9 = (unsigned short)7459;
int zero = 0;
unsigned char var_10 = (unsigned char)60;
unsigned int var_11 = 3465792199U;
short var_12 = (short)-32048;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
