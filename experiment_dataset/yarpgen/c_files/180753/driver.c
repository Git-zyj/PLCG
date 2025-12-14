#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12732139058284948951ULL;
long long int var_1 = 735645150063143518LL;
unsigned char var_2 = (unsigned char)139;
_Bool var_6 = (_Bool)0;
int var_7 = 1381088900;
signed char var_8 = (signed char)-12;
int var_9 = -1741272061;
long long int var_12 = 6581334787528565046LL;
long long int var_13 = -6502553155115959606LL;
int zero = 0;
int var_16 = 118460188;
long long int var_17 = 6578705986657192241LL;
unsigned int var_18 = 1944634958U;
short var_19 = (short)-8880;
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
