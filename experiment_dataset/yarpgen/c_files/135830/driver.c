#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)167;
short var_12 = (short)315;
unsigned short var_15 = (unsigned short)26494;
int zero = 0;
unsigned long long int var_16 = 8302045392839877003ULL;
unsigned short var_17 = (unsigned short)48173;
unsigned char var_18 = (unsigned char)54;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
