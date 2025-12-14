#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)178;
unsigned long long int var_8 = 4145908044991826081ULL;
unsigned int var_12 = 3224664179U;
short var_14 = (short)-4804;
int zero = 0;
unsigned short var_15 = (unsigned short)38496;
int var_16 = -1886864727;
unsigned char var_17 = (unsigned char)154;
unsigned char var_18 = (unsigned char)89;
unsigned char var_19 = (unsigned char)188;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
