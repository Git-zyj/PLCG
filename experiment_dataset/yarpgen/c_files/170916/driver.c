#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6435715229691136569LL;
short var_1 = (short)4809;
signed char var_2 = (signed char)-17;
unsigned short var_4 = (unsigned short)48963;
unsigned char var_6 = (unsigned char)122;
unsigned short var_7 = (unsigned short)2739;
signed char var_8 = (signed char)-99;
unsigned char var_11 = (unsigned char)246;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)6677;
signed char var_14 = (signed char)72;
unsigned int var_15 = 2538999915U;
long long int var_16 = -4003770594741806758LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
