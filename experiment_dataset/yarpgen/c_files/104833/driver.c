#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-14;
unsigned int var_7 = 4033449050U;
_Bool var_8 = (_Bool)1;
unsigned long long int var_12 = 16568330747192498151ULL;
int zero = 0;
short var_13 = (short)9258;
int var_14 = 2063773935;
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
