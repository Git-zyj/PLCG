#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1067656130;
long long int var_2 = -4946791035862572927LL;
unsigned short var_6 = (unsigned short)62161;
unsigned int var_7 = 3120513791U;
signed char var_8 = (signed char)42;
short var_12 = (short)-30365;
int zero = 0;
long long int var_15 = 1979324753115365371LL;
unsigned short var_16 = (unsigned short)54114;
_Bool var_17 = (_Bool)0;
long long int var_18 = -2022179720433447679LL;
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
