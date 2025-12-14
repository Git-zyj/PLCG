#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)25;
long long int var_6 = 285542706379419184LL;
_Bool var_7 = (_Bool)1;
unsigned int var_14 = 659443470U;
int zero = 0;
short var_15 = (short)-18449;
unsigned long long int var_16 = 8869191643275464891ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
