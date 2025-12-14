#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1554601754;
int var_1 = -1816250950;
unsigned short var_4 = (unsigned short)8841;
_Bool var_6 = (_Bool)1;
int var_9 = 2121395944;
unsigned short var_11 = (unsigned short)19840;
unsigned long long int var_12 = 1945890081032073685ULL;
int var_15 = 208097618;
int var_16 = 130075605;
unsigned char var_18 = (unsigned char)100;
int zero = 0;
unsigned short var_20 = (unsigned short)50373;
long long int var_21 = -8629203650326844393LL;
int var_22 = 1617732755;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
