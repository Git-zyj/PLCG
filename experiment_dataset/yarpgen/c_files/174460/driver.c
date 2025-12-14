#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_1 = (signed char)-2;
unsigned short var_6 = (unsigned short)49675;
short var_8 = (short)24764;
unsigned short var_10 = (unsigned short)32022;
signed char var_15 = (signed char)-53;
int zero = 0;
long long int var_19 = 6832511883243962286LL;
unsigned short var_20 = (unsigned short)45925;
void init() {
}

void checksum() {
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
