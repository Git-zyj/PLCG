#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)-19638;
_Bool var_9 = (_Bool)0;
long long int var_11 = -6305244092645406478LL;
signed char var_14 = (signed char)-6;
unsigned int var_15 = 562678706U;
unsigned char var_16 = (unsigned char)24;
int zero = 0;
int var_17 = -762914356;
signed char var_18 = (signed char)-69;
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
