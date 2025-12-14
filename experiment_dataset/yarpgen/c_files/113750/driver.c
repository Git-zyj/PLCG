#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)25399;
unsigned char var_1 = (unsigned char)252;
unsigned short var_2 = (unsigned short)4400;
short var_3 = (short)-10651;
long long int var_4 = -8846332812764402162LL;
short var_5 = (short)-8471;
signed char var_8 = (signed char)57;
short var_10 = (short)20259;
int zero = 0;
int var_12 = -1481518620;
unsigned int var_13 = 3403278985U;
unsigned char var_14 = (unsigned char)253;
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
