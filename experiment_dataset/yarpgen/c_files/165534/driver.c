#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)81;
signed char var_2 = (signed char)91;
short var_3 = (short)24857;
signed char var_5 = (signed char)112;
short var_6 = (short)12172;
unsigned int var_7 = 2941332712U;
short var_9 = (short)25890;
int zero = 0;
short var_10 = (short)-8178;
unsigned short var_11 = (unsigned short)48150;
unsigned long long int var_12 = 13395081625810251515ULL;
unsigned int var_13 = 2977389777U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
