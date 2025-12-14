#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_1 = (_Bool)0;
int var_2 = 548912153;
short var_3 = (short)30585;
short var_4 = (short)-25176;
unsigned char var_6 = (unsigned char)176;
unsigned char var_7 = (unsigned char)76;
short var_10 = (short)-31785;
signed char var_12 = (signed char)-19;
short var_14 = (short)23101;
_Bool var_15 = (_Bool)1;
signed char var_17 = (signed char)-46;
signed char var_18 = (signed char)-120;
int zero = 0;
long long int var_19 = -9080527163126865843LL;
short var_20 = (short)-3227;
short var_21 = (short)24447;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
