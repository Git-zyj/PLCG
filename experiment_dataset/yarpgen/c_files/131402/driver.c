#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -1396701462;
unsigned long long int var_6 = 2028674133106059761ULL;
unsigned long long int var_7 = 9986794557463164252ULL;
int var_8 = -518973504;
_Bool var_9 = (_Bool)0;
int zero = 0;
short var_16 = (short)-11174;
_Bool var_17 = (_Bool)1;
short var_18 = (short)-5716;
void init() {
}

void checksum() {
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
