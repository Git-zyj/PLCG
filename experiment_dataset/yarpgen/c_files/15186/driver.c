#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5066000277673313053LL;
unsigned int var_8 = 3559456955U;
unsigned short var_12 = (unsigned short)6293;
unsigned int var_13 = 1951800157U;
short var_14 = (short)-18230;
int zero = 0;
signed char var_15 = (signed char)1;
unsigned int var_16 = 2675052723U;
unsigned short var_17 = (unsigned short)22154;
_Bool var_18 = (_Bool)0;
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
