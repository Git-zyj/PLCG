#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)49480;
signed char var_7 = (signed char)58;
unsigned int var_8 = 1000713727U;
signed char var_9 = (signed char)59;
int var_10 = 2002731128;
unsigned short var_12 = (unsigned short)28624;
int zero = 0;
unsigned short var_14 = (unsigned short)29663;
long long int var_15 = -335337033324786314LL;
unsigned int var_16 = 3094350389U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
