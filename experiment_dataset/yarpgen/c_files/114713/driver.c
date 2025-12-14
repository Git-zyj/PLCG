#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-33;
_Bool var_2 = (_Bool)0;
unsigned int var_4 = 4218305286U;
_Bool var_8 = (_Bool)0;
short var_10 = (short)30657;
int zero = 0;
_Bool var_13 = (_Bool)0;
int var_14 = 962946746;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
