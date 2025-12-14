#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2172007561425903984ULL;
int var_3 = 1833686082;
unsigned long long int var_6 = 12086398225552590211ULL;
unsigned long long int var_8 = 1842665009801604042ULL;
unsigned short var_11 = (unsigned short)33953;
short var_13 = (short)-2493;
signed char var_14 = (signed char)-113;
int zero = 0;
unsigned long long int var_17 = 9098678868454981231ULL;
unsigned char var_18 = (unsigned char)205;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
