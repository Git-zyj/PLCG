#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)112;
int var_3 = 1831293461;
_Bool var_4 = (_Bool)0;
short var_5 = (short)28090;
long long int var_6 = -1376575368067218610LL;
_Bool var_7 = (_Bool)0;
long long int var_10 = 8441762733471431543LL;
unsigned short var_11 = (unsigned short)12502;
int zero = 0;
unsigned long long int var_12 = 5272345070928998590ULL;
unsigned int var_13 = 2007896073U;
int var_14 = 360984647;
unsigned short var_15 = (unsigned short)54342;
unsigned short var_16 = (unsigned short)2934;
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
