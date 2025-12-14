#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)11;
_Bool var_5 = (_Bool)0;
signed char var_6 = (signed char)-31;
short var_9 = (short)-12575;
int var_10 = -847687522;
unsigned short var_11 = (unsigned short)2704;
short var_12 = (short)-23847;
short var_13 = (short)30840;
int zero = 0;
unsigned int var_14 = 1848424959U;
signed char var_15 = (signed char)5;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
