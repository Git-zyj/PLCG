#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)4241;
unsigned int var_5 = 4018166968U;
int var_7 = -95050532;
unsigned char var_9 = (unsigned char)79;
int var_11 = 365886943;
unsigned long long int var_12 = 15154944681716767686ULL;
short var_13 = (short)20888;
int zero = 0;
unsigned short var_15 = (unsigned short)19783;
unsigned char var_16 = (unsigned char)189;
_Bool var_17 = (_Bool)1;
unsigned short var_18 = (unsigned short)6567;
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
