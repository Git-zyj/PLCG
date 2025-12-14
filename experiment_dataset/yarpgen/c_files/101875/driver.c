#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1584322017;
short var_5 = (short)22274;
unsigned short var_6 = (unsigned short)10507;
unsigned long long int var_9 = 6215649641267243329ULL;
unsigned char var_15 = (unsigned char)192;
short var_16 = (short)-29801;
int zero = 0;
unsigned char var_18 = (unsigned char)55;
int var_19 = -1546995203;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
