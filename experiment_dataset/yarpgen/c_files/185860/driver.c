#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-23;
unsigned int var_10 = 3910589631U;
signed char var_13 = (signed char)14;
int zero = 0;
signed char var_15 = (signed char)78;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)6652;
int var_18 = -515788648;
void init() {
}

void checksum() {
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
