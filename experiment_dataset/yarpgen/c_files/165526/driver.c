#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)113;
signed char var_8 = (signed char)-30;
long long int var_13 = 8794713343826863277LL;
short var_14 = (short)-21719;
short var_15 = (short)-31242;
short var_19 = (short)5379;
int zero = 0;
short var_20 = (short)30464;
_Bool var_21 = (_Bool)0;
unsigned char var_22 = (unsigned char)144;
unsigned int var_23 = 1608311399U;
short var_24 = (short)-11961;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
