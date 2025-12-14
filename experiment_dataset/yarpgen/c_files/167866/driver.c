#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-3456;
unsigned long long int var_8 = 13030097953041106203ULL;
unsigned long long int var_10 = 7591324579384617493ULL;
int zero = 0;
unsigned int var_13 = 3105216806U;
unsigned short var_14 = (unsigned short)142;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
