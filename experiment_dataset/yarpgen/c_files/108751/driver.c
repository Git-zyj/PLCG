#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1456095377;
signed char var_1 = (signed char)-88;
int var_4 = 1694585701;
unsigned int var_8 = 3455676655U;
unsigned long long int var_10 = 2230508266254480858ULL;
int var_12 = -446953191;
int var_13 = -96333600;
int zero = 0;
short var_14 = (short)11253;
_Bool var_15 = (_Bool)0;
short var_16 = (short)13358;
signed char var_17 = (signed char)-65;
short var_18 = (short)1665;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
