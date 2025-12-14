#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 14556749260074038965ULL;
_Bool var_4 = (_Bool)0;
signed char var_7 = (signed char)73;
short var_8 = (short)12845;
signed char var_12 = (signed char)121;
int zero = 0;
unsigned int var_14 = 3967355615U;
long long int var_15 = -8355697146268809521LL;
signed char var_16 = (signed char)-15;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
