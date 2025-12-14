#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1124996020;
short var_1 = (short)5809;
_Bool var_4 = (_Bool)0;
int var_16 = -2122611204;
int zero = 0;
int var_20 = -364058740;
_Bool var_21 = (_Bool)1;
short var_22 = (short)2843;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
