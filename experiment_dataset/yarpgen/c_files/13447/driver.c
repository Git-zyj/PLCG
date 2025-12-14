#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-6741;
unsigned int var_5 = 2804868044U;
signed char var_6 = (signed char)67;
unsigned short var_9 = (unsigned short)39605;
signed char var_13 = (signed char)74;
signed char var_14 = (signed char)-46;
int zero = 0;
unsigned char var_15 = (unsigned char)190;
unsigned int var_16 = 78084200U;
unsigned short var_17 = (unsigned short)20479;
short var_18 = (short)29455;
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
