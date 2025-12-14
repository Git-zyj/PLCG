#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)26893;
short var_5 = (short)-32584;
short var_7 = (short)16029;
unsigned char var_9 = (unsigned char)164;
int var_10 = 104829768;
short var_11 = (short)27174;
unsigned char var_14 = (unsigned char)85;
int zero = 0;
unsigned short var_16 = (unsigned short)44915;
unsigned short var_17 = (unsigned short)18861;
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
