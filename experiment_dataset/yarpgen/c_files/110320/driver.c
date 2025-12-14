#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
_Bool var_4 = (_Bool)0;
signed char var_5 = (signed char)76;
signed char var_7 = (signed char)-80;
long long int var_11 = 7779131217522788922LL;
short var_13 = (short)-14982;
int zero = 0;
unsigned short var_14 = (unsigned short)56136;
unsigned short var_15 = (unsigned short)37323;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
