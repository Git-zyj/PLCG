#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4685169877009292282LL;
long long int var_3 = -3630709371644530161LL;
unsigned int var_6 = 2239899841U;
_Bool var_8 = (_Bool)0;
signed char var_9 = (signed char)-104;
unsigned char var_10 = (unsigned char)231;
unsigned short var_11 = (unsigned short)33423;
short var_15 = (short)26988;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned long long int var_18 = 1609545853278544863ULL;
int var_19 = -1588562917;
_Bool var_20 = (_Bool)1;
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
