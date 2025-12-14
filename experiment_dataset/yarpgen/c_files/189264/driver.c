#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)51593;
short var_2 = (short)31182;
short var_4 = (short)8145;
long long int var_7 = 7126881819772649942LL;
unsigned char var_8 = (unsigned char)175;
_Bool var_10 = (_Bool)0;
int var_11 = -356775553;
signed char var_12 = (signed char)-33;
int var_14 = -1617869650;
int zero = 0;
short var_15 = (short)-334;
signed char var_16 = (signed char)-99;
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
