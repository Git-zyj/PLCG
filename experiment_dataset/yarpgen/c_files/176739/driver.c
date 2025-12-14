#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)237;
signed char var_1 = (signed char)23;
unsigned char var_2 = (unsigned char)41;
short var_4 = (short)17540;
signed char var_12 = (signed char)83;
int zero = 0;
signed char var_14 = (signed char)43;
unsigned int var_15 = 2106270634U;
unsigned long long int var_16 = 10252164303249139796ULL;
unsigned short var_17 = (unsigned short)64473;
unsigned char var_18 = (unsigned char)116;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
