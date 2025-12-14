#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_1 = (short)-14654;
int var_3 = 1087287662;
short var_5 = (short)15864;
unsigned int var_7 = 569434077U;
long long int var_12 = 3885657756922287434LL;
int zero = 0;
unsigned long long int var_13 = 12345592786791496624ULL;
signed char var_14 = (signed char)-121;
short var_15 = (short)-20885;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
