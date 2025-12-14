#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)118;
_Bool var_1 = (_Bool)1;
unsigned int var_2 = 782511704U;
signed char var_3 = (signed char)6;
unsigned int var_4 = 19506242U;
_Bool var_5 = (_Bool)1;
_Bool var_6 = (_Bool)1;
unsigned int var_7 = 3298239182U;
unsigned int var_8 = 4049924707U;
int zero = 0;
unsigned int var_10 = 123119205U;
unsigned int var_11 = 328693013U;
signed char var_12 = (signed char)-18;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
