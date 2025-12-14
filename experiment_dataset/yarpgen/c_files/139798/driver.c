#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1371748038;
unsigned short var_4 = (unsigned short)18623;
_Bool var_7 = (_Bool)1;
unsigned short var_8 = (unsigned short)36621;
unsigned short var_10 = (unsigned short)39653;
unsigned short var_12 = (unsigned short)59145;
int zero = 0;
_Bool var_15 = (_Bool)1;
short var_16 = (short)-14538;
int var_17 = -1488949086;
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
