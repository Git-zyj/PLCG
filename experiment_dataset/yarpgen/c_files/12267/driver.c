#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)230;
unsigned short var_4 = (unsigned short)50700;
unsigned int var_5 = 2212705602U;
short var_11 = (short)19601;
unsigned long long int var_12 = 14072281574612433433ULL;
int zero = 0;
signed char var_14 = (signed char)-101;
unsigned short var_15 = (unsigned short)48394;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
