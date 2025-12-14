#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned long long int var_9 = 16945944047712124770ULL;
short var_12 = (short)-31122;
signed char var_14 = (signed char)-4;
int zero = 0;
unsigned short var_15 = (unsigned short)12831;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 1317388261526202453ULL;
int var_18 = 2065876533;
int var_19 = -1152956893;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
