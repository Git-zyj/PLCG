#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)19976;
int var_5 = 1385724647;
unsigned char var_9 = (unsigned char)165;
short var_10 = (short)32036;
int zero = 0;
short var_12 = (short)-31073;
unsigned char var_13 = (unsigned char)251;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
