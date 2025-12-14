#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 57700082678599140LL;
unsigned short var_1 = (unsigned short)13497;
unsigned int var_3 = 240005564U;
_Bool var_4 = (_Bool)1;
signed char var_9 = (signed char)-26;
unsigned short var_10 = (unsigned short)48303;
long long int var_12 = 2388717750930161286LL;
short var_13 = (short)-7334;
signed char var_14 = (signed char)76;
_Bool var_16 = (_Bool)1;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned int var_18 = 3118021773U;
unsigned long long int var_19 = 18208145706799392770ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
