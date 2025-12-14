#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)0;
unsigned char var_7 = (unsigned char)53;
int var_8 = 980764035;
unsigned char var_9 = (unsigned char)123;
short var_11 = (short)28629;
signed char var_13 = (signed char)-78;
int zero = 0;
unsigned int var_15 = 3909790320U;
unsigned long long int var_16 = 520071771068607489ULL;
short var_17 = (short)-23978;
unsigned char var_18 = (unsigned char)224;
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
