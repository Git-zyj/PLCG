#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 738787692;
unsigned int var_5 = 2784466129U;
short var_11 = (short)30950;
unsigned int var_13 = 1126071941U;
int zero = 0;
signed char var_15 = (signed char)29;
unsigned short var_16 = (unsigned short)37850;
_Bool var_17 = (_Bool)0;
unsigned char var_18 = (unsigned char)18;
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
