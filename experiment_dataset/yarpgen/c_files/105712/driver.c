#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)222;
short var_1 = (short)-18738;
unsigned char var_3 = (unsigned char)65;
_Bool var_4 = (_Bool)1;
short var_9 = (short)-31941;
unsigned short var_11 = (unsigned short)46515;
unsigned short var_12 = (unsigned short)39405;
unsigned int var_15 = 3385886621U;
int zero = 0;
_Bool var_16 = (_Bool)1;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
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
