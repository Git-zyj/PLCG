#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-16658;
unsigned long long int var_5 = 8778656755627563936ULL;
unsigned short var_6 = (unsigned short)54598;
unsigned short var_7 = (unsigned short)35689;
unsigned short var_11 = (unsigned short)46680;
_Bool var_12 = (_Bool)0;
short var_14 = (short)-6943;
int zero = 0;
unsigned long long int var_15 = 2268953626823013286ULL;
unsigned short var_16 = (unsigned short)61694;
void init() {
}

void checksum() {
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
