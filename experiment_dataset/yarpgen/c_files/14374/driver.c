#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)29432;
unsigned short var_7 = (unsigned short)51588;
unsigned long long int var_12 = 11190001488704291163ULL;
signed char var_17 = (signed char)-117;
int zero = 0;
_Bool var_18 = (_Bool)0;
long long int var_19 = 839233065996683428LL;
long long int var_20 = -6115336933746283580LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
