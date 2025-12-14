#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_2 = (_Bool)1;
unsigned int var_4 = 1174593537U;
unsigned int var_5 = 408089921U;
signed char var_7 = (signed char)20;
signed char var_10 = (signed char)-31;
int zero = 0;
short var_15 = (short)-26128;
unsigned long long int var_16 = 5025051420487997938ULL;
unsigned long long int var_17 = 5877455836800499201ULL;
signed char var_18 = (signed char)-23;
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
