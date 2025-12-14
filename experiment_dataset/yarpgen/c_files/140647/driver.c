#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
_Bool var_5 = (_Bool)1;
unsigned int var_7 = 683958306U;
unsigned long long int var_10 = 13223948452642750979ULL;
unsigned long long int var_11 = 10719080922237378633ULL;
int var_14 = -226203664;
int zero = 0;
signed char var_15 = (signed char)-73;
short var_16 = (short)573;
unsigned short var_17 = (unsigned short)97;
int var_18 = 1919486280;
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
