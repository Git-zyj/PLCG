#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)10418;
unsigned char var_7 = (unsigned char)193;
short var_14 = (short)14571;
int zero = 0;
unsigned short var_15 = (unsigned short)5369;
short var_16 = (short)-8713;
unsigned char var_17 = (unsigned char)217;
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
