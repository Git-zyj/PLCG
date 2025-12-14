#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)41074;
long long int var_4 = -6038962421025003862LL;
_Bool var_6 = (_Bool)1;
int zero = 0;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)-40;
unsigned int var_15 = 2362984562U;
unsigned short var_16 = (unsigned short)42710;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
