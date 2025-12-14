#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
_Bool var_4 = (_Bool)1;
_Bool var_6 = (_Bool)1;
unsigned int var_13 = 2030255080U;
unsigned int var_16 = 1274325614U;
int zero = 0;
unsigned char var_20 = (unsigned char)226;
_Bool var_21 = (_Bool)1;
signed char var_22 = (signed char)64;
signed char var_23 = (signed char)-114;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
