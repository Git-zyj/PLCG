#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)60;
unsigned char var_2 = (unsigned char)18;
signed char var_3 = (signed char)-54;
unsigned short var_5 = (unsigned short)56189;
long long int var_6 = -7606205189737835872LL;
unsigned int var_7 = 1001882792U;
unsigned short var_8 = (unsigned short)2548;
_Bool var_9 = (_Bool)0;
int var_10 = -2095046924;
signed char var_11 = (signed char)30;
unsigned short var_12 = (unsigned short)34154;
long long int var_13 = -8435814398672972439LL;
signed char var_14 = (signed char)87;
int zero = 0;
long long int var_15 = 7492550441180192894LL;
unsigned short var_16 = (unsigned short)8837;
long long int var_17 = -741310966195726947LL;
_Bool var_18 = (_Bool)1;
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
