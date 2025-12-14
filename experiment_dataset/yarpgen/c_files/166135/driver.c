#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)25526;
_Bool var_2 = (_Bool)1;
unsigned char var_6 = (unsigned char)41;
unsigned long long int var_8 = 1280614290623315512ULL;
int zero = 0;
signed char var_19 = (signed char)86;
signed char var_20 = (signed char)-92;
unsigned long long int var_21 = 1866174926987192115ULL;
unsigned char var_22 = (unsigned char)110;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
