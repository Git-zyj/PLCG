#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -900493450;
signed char var_2 = (signed char)-119;
unsigned long long int var_3 = 16852267723943799595ULL;
short var_4 = (short)31646;
int var_5 = 1136867804;
unsigned long long int var_6 = 340397994589105455ULL;
signed char var_7 = (signed char)82;
_Bool var_8 = (_Bool)1;
unsigned short var_9 = (unsigned short)10049;
_Bool var_10 = (_Bool)0;
unsigned int var_11 = 3897946740U;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)1;
int var_15 = -825979383;
int zero = 0;
unsigned int var_16 = 2841167098U;
_Bool var_17 = (_Bool)1;
short var_18 = (short)26913;
int var_19 = -1749362394;
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
