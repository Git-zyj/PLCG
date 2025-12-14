#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -605318034;
short var_4 = (short)30102;
unsigned char var_8 = (unsigned char)55;
unsigned int var_9 = 1212114392U;
int var_10 = 1405685214;
unsigned char var_12 = (unsigned char)131;
int zero = 0;
unsigned short var_13 = (unsigned short)41893;
int var_14 = 1131095389;
long long int var_15 = 5748790355106104520LL;
int var_16 = -907687258;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
