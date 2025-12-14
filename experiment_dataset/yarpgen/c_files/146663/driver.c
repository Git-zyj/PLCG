#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
short var_3 = (short)-9991;
_Bool var_4 = (_Bool)1;
signed char var_5 = (signed char)18;
unsigned int var_7 = 1796884888U;
signed char var_8 = (signed char)-113;
int zero = 0;
long long int var_10 = 9205786050094127928LL;
long long int var_11 = -6122942187426729135LL;
int var_12 = -1786723649;
unsigned short var_13 = (unsigned short)59795;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
