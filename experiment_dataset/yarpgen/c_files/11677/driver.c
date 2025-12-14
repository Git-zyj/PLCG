#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 2360449234U;
unsigned long long int var_6 = 12583969233784320928ULL;
int var_8 = -2003470715;
long long int var_10 = -1791197919656142757LL;
short var_17 = (short)13985;
int zero = 0;
_Bool var_18 = (_Bool)0;
signed char var_19 = (signed char)-110;
unsigned int var_20 = 1445704266U;
signed char var_21 = (signed char)6;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
