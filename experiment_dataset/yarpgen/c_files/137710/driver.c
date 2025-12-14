#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_2 = -1181177268;
long long int var_3 = 694452734756183030LL;
unsigned char var_5 = (unsigned char)176;
short var_6 = (short)-25095;
long long int var_7 = 3190841619507519336LL;
short var_9 = (short)-32276;
unsigned short var_11 = (unsigned short)7894;
_Bool var_12 = (_Bool)1;
signed char var_14 = (signed char)-7;
int var_15 = -1824271267;
unsigned int var_17 = 429531748U;
long long int var_18 = -6650510431001355260LL;
int zero = 0;
unsigned int var_19 = 3038600637U;
short var_20 = (short)6939;
unsigned short var_21 = (unsigned short)243;
short var_22 = (short)-1390;
unsigned short var_23 = (unsigned short)49407;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
