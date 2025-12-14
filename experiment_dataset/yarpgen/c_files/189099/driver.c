#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned short var_2 = (unsigned short)10187;
unsigned int var_4 = 3133917156U;
int var_5 = 1452861575;
_Bool var_6 = (_Bool)0;
unsigned char var_7 = (unsigned char)101;
short var_8 = (short)4160;
unsigned short var_9 = (unsigned short)6202;
_Bool var_10 = (_Bool)0;
unsigned char var_12 = (unsigned char)57;
unsigned short var_14 = (unsigned short)29874;
int var_15 = 1394895807;
int zero = 0;
unsigned int var_16 = 3602364247U;
unsigned char var_17 = (unsigned char)85;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 13236471705832923851ULL;
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
