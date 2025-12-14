#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)28390;
unsigned short var_2 = (unsigned short)15516;
_Bool var_5 = (_Bool)0;
unsigned char var_6 = (unsigned char)226;
unsigned int var_8 = 1716864999U;
int zero = 0;
signed char var_13 = (signed char)40;
short var_14 = (short)29396;
void init() {
}

void checksum() {
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
