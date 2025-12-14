#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-104;
_Bool var_3 = (_Bool)0;
int var_12 = 552538506;
int zero = 0;
long long int var_16 = -4809596562395505765LL;
int var_17 = 1607022191;
long long int var_18 = -4561946637626839660LL;
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
