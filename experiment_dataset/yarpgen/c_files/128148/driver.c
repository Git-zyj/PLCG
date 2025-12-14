#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -3907640213240347759LL;
short var_7 = (short)-28747;
int var_10 = 1905611894;
signed char var_11 = (signed char)-85;
unsigned char var_17 = (unsigned char)59;
int zero = 0;
unsigned char var_19 = (unsigned char)178;
short var_20 = (short)-9008;
_Bool var_21 = (_Bool)0;
unsigned short var_22 = (unsigned short)29811;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
