#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
int var_3 = -2145138974;
int var_5 = -31111266;
short var_7 = (short)24142;
_Bool var_8 = (_Bool)0;
unsigned short var_10 = (unsigned short)8593;
short var_14 = (short)10796;
int zero = 0;
short var_15 = (short)29204;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 90662528U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
