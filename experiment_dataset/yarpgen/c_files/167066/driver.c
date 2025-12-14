#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned short var_7 = (unsigned short)61678;
unsigned char var_8 = (unsigned char)240;
unsigned short var_10 = (unsigned short)17141;
unsigned char var_12 = (unsigned char)39;
_Bool var_13 = (_Bool)0;
unsigned long long int var_16 = 62317219962834827ULL;
int zero = 0;
unsigned int var_17 = 1941190372U;
int var_18 = 1141906141;
void init() {
}

void checksum() {
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
