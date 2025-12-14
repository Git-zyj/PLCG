#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)24866;
signed char var_3 = (signed char)-115;
unsigned char var_4 = (unsigned char)147;
unsigned long long int var_8 = 10311178833791338372ULL;
int zero = 0;
short var_12 = (short)-23523;
short var_13 = (short)-1227;
unsigned long long int var_14 = 1283495628190148577ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
