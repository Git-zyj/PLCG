#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_1 = (short)-7504;
unsigned char var_8 = (unsigned char)15;
signed char var_10 = (signed char)32;
_Bool var_11 = (_Bool)1;
int zero = 0;
int var_12 = -397333040;
unsigned long long int var_13 = 2836854562478954838ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
