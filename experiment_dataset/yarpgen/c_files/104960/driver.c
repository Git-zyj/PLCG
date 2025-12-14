#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-1206;
unsigned short var_6 = (unsigned short)28455;
long long int var_9 = -6415692502554823231LL;
unsigned int var_11 = 2439238916U;
long long int var_15 = 4758483295740530021LL;
int zero = 0;
unsigned char var_16 = (unsigned char)26;
unsigned long long int var_17 = 5299396104461986797ULL;
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
