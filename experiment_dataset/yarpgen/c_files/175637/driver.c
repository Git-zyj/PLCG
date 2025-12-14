#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)91;
unsigned char var_7 = (unsigned char)137;
short var_9 = (short)-31151;
short var_10 = (short)-13718;
unsigned char var_12 = (unsigned char)100;
unsigned short var_13 = (unsigned short)738;
int zero = 0;
unsigned short var_14 = (unsigned short)62019;
unsigned long long int var_15 = 14133928794194398969ULL;
short var_16 = (short)31782;
unsigned char var_17 = (unsigned char)51;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
