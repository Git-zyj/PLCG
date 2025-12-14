#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)117;
unsigned char var_1 = (unsigned char)206;
unsigned int var_2 = 4146366295U;
unsigned char var_3 = (unsigned char)56;
short var_10 = (short)11865;
short var_11 = (short)1035;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)0;
int var_15 = 1747631736;
int zero = 0;
int var_16 = 1319652526;
short var_17 = (short)13624;
signed char var_18 = (signed char)-12;
void init() {
}

void checksum() {
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
