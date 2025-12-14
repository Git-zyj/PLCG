#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
signed char var_9 = (signed char)43;
unsigned char var_10 = (unsigned char)93;
short var_12 = (short)26616;
signed char var_13 = (signed char)-42;
int zero = 0;
_Bool var_14 = (_Bool)1;
long long int var_15 = 5656846040620725452LL;
short var_16 = (short)-22823;
unsigned short var_17 = (unsigned short)56401;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
