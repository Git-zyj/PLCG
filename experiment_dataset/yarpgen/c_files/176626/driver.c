#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-6011;
unsigned long long int var_1 = 12591301364206716081ULL;
unsigned char var_2 = (unsigned char)77;
short var_6 = (short)31887;
int zero = 0;
unsigned short var_14 = (unsigned short)47854;
unsigned int var_15 = 1852309657U;
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
