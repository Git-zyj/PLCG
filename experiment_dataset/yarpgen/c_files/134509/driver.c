#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
_Bool var_6 = (_Bool)0;
short var_10 = (short)7749;
signed char var_11 = (signed char)-87;
unsigned char var_17 = (unsigned char)191;
unsigned int var_18 = 808354381U;
int zero = 0;
long long int var_20 = -3321086500874207223LL;
signed char var_21 = (signed char)-115;
_Bool var_22 = (_Bool)0;
signed char var_23 = (signed char)-73;
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
