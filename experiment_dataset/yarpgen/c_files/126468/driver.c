#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)0;
signed char var_8 = (signed char)-41;
int var_13 = 49305418;
int zero = 0;
long long int var_18 = -778696242347897224LL;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 1604704567U;
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
