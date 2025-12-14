#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = -525859938;
unsigned short var_8 = (unsigned short)16746;
unsigned char var_9 = (unsigned char)146;
int zero = 0;
unsigned char var_15 = (unsigned char)149;
unsigned short var_16 = (unsigned short)27116;
int var_17 = -1846776782;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
