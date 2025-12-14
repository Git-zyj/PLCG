#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3349411500U;
unsigned int var_2 = 4181424969U;
unsigned int var_5 = 2329802472U;
int var_7 = 1712216801;
short var_8 = (short)18979;
int var_10 = 1856620133;
_Bool var_11 = (_Bool)0;
short var_13 = (short)-29446;
int zero = 0;
signed char var_14 = (signed char)61;
unsigned int var_15 = 3421289341U;
unsigned int var_16 = 629287867U;
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
