#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned char var_6 = (unsigned char)159;
signed char var_10 = (signed char)56;
unsigned char var_11 = (unsigned char)134;
int zero = 0;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)-82;
signed char var_15 = (signed char)77;
int var_16 = -806886635;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
