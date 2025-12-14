#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)99;
unsigned int var_5 = 3838728292U;
_Bool var_8 = (_Bool)1;
signed char var_10 = (signed char)-63;
short var_11 = (short)-30646;
_Bool var_14 = (_Bool)0;
int zero = 0;
signed char var_15 = (signed char)-13;
signed char var_16 = (signed char)-101;
void init() {
}

void checksum() {
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
