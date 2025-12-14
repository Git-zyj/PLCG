#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10498882876213420647ULL;
short var_3 = (short)-7205;
short var_11 = (short)2044;
int zero = 0;
int var_12 = 1606457255;
unsigned short var_13 = (unsigned short)20244;
int var_14 = 1357942663;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
