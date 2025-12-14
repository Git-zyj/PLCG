#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)80;
long long int var_6 = -2767618549443390861LL;
_Bool var_7 = (_Bool)1;
signed char var_8 = (signed char)89;
unsigned short var_10 = (unsigned short)62191;
signed char var_11 = (signed char)(-127 - 1);
short var_13 = (short)-13035;
short var_14 = (short)-1520;
unsigned int var_15 = 190574387U;
int zero = 0;
signed char var_17 = (signed char)-102;
unsigned int var_18 = 1501587757U;
signed char var_19 = (signed char)-99;
int var_20 = 138019542;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
