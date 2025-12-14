#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -3399205775351192102LL;
unsigned short var_4 = (unsigned short)24175;
unsigned int var_5 = 4047220920U;
unsigned char var_6 = (unsigned char)104;
short var_8 = (short)-17054;
signed char var_11 = (signed char)-85;
int zero = 0;
unsigned int var_15 = 1837313652U;
short var_16 = (short)22488;
unsigned char var_17 = (unsigned char)107;
int var_18 = 188622601;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
