#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)23941;
unsigned short var_2 = (unsigned short)30502;
long long int var_3 = 4061057196000046311LL;
unsigned short var_12 = (unsigned short)54229;
short var_14 = (short)11750;
int zero = 0;
int var_16 = -385780537;
unsigned int var_17 = 3441610076U;
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
