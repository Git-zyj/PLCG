#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12085582300632502317ULL;
long long int var_1 = 1871173674865061087LL;
short var_2 = (short)702;
unsigned short var_3 = (unsigned short)12687;
short var_4 = (short)-10648;
short var_5 = (short)-32638;
short var_6 = (short)25971;
short var_7 = (short)-5898;
unsigned long long int var_8 = 15861567163116843837ULL;
int var_9 = -1858183601;
_Bool var_10 = (_Bool)0;
signed char var_11 = (signed char)-119;
unsigned short var_12 = (unsigned short)60575;
int var_13 = -1535237777;
short var_14 = (short)-15209;
unsigned int var_15 = 1832822379U;
short var_16 = (short)17556;
int zero = 0;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)108;
void init() {
}

void checksum() {
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
