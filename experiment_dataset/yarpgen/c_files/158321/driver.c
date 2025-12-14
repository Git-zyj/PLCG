#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned long long int var_5 = 14310723914383109573ULL;
int var_6 = 1633220173;
signed char var_8 = (signed char)-18;
unsigned int var_9 = 916221648U;
unsigned int var_11 = 1443375348U;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 409472331U;
short var_16 = (short)23124;
_Bool var_17 = (_Bool)0;
unsigned char var_18 = (unsigned char)238;
short var_19 = (short)-30680;
int zero = 0;
unsigned long long int var_20 = 5735821674901023939ULL;
short var_21 = (short)-31074;
unsigned int var_22 = 3828569010U;
_Bool var_23 = (_Bool)1;
void init() {
}

void checksum() {
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
