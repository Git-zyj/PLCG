#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-20563;
signed char var_4 = (signed char)27;
short var_7 = (short)26254;
unsigned int var_10 = 580395697U;
int var_12 = -2139753956;
int zero = 0;
unsigned long long int var_14 = 14362471353703093666ULL;
_Bool var_15 = (_Bool)0;
signed char var_16 = (signed char)115;
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
