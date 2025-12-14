#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1643232606;
short var_5 = (short)12200;
int var_6 = 38964000;
unsigned short var_8 = (unsigned short)60757;
int zero = 0;
short var_15 = (short)-18038;
unsigned char var_16 = (unsigned char)228;
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
