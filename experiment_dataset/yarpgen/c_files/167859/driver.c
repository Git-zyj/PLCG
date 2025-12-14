#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)22863;
_Bool var_1 = (_Bool)1;
_Bool var_2 = (_Bool)1;
_Bool var_3 = (_Bool)0;
unsigned long long int var_8 = 273919559879271274ULL;
int zero = 0;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)84;
int var_12 = -599350653;
int var_13 = -198008686;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
