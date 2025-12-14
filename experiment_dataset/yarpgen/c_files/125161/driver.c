#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)23454;
_Bool var_2 = (_Bool)1;
int var_5 = -887909285;
signed char var_6 = (signed char)71;
int var_7 = 768093577;
unsigned short var_8 = (unsigned short)8434;
int zero = 0;
unsigned short var_16 = (unsigned short)55092;
short var_17 = (short)3473;
unsigned short var_18 = (unsigned short)36851;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
