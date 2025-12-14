#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_2 = (_Bool)1;
unsigned char var_3 = (unsigned char)196;
unsigned char var_6 = (unsigned char)232;
short var_9 = (short)-3454;
unsigned char var_10 = (unsigned char)152;
short var_11 = (short)1710;
short var_12 = (short)-22952;
unsigned char var_13 = (unsigned char)123;
int zero = 0;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)1;
unsigned char var_17 = (unsigned char)72;
unsigned char var_18 = (unsigned char)237;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
