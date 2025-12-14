#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)59;
unsigned char var_2 = (unsigned char)11;
_Bool var_12 = (_Bool)0;
unsigned int var_14 = 1231384153U;
int zero = 0;
signed char var_17 = (signed char)-99;
short var_18 = (short)14864;
void init() {
}

void checksum() {
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
