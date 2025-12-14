#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)85;
unsigned int var_4 = 3457881000U;
signed char var_6 = (signed char)95;
short var_8 = (short)21742;
unsigned char var_11 = (unsigned char)45;
unsigned int var_16 = 2128126212U;
int zero = 0;
int var_19 = 1627157573;
unsigned char var_20 = (unsigned char)47;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
