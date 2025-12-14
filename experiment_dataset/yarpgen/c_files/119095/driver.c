#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_3 = 4558747098476908038ULL;
short var_7 = (short)-19842;
unsigned int var_8 = 3192632094U;
signed char var_13 = (signed char)3;
int zero = 0;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 5941417055449813296ULL;
_Bool var_17 = (_Bool)0;
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
