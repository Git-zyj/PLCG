#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)201;
unsigned long long int var_4 = 9067492469238171612ULL;
signed char var_6 = (signed char)4;
unsigned long long int var_7 = 683576901652666694ULL;
_Bool var_9 = (_Bool)0;
_Bool var_13 = (_Bool)1;
signed char var_16 = (signed char)108;
short var_17 = (short)21989;
int zero = 0;
unsigned long long int var_19 = 13958667194241388692ULL;
unsigned long long int var_20 = 11983365007703734972ULL;
long long int var_21 = 6755321763110309307LL;
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
