#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-60;
int var_3 = -1748626020;
unsigned long long int var_5 = 8414514939636074939ULL;
unsigned int var_7 = 352747224U;
short var_8 = (short)18599;
unsigned char var_11 = (unsigned char)99;
short var_13 = (short)8980;
_Bool var_14 = (_Bool)1;
int zero = 0;
short var_16 = (short)-21008;
short var_17 = (short)9300;
unsigned short var_18 = (unsigned short)18661;
short var_19 = (short)25383;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
