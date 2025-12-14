#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_1 = (unsigned short)9532;
short var_6 = (short)-21803;
unsigned long long int var_7 = 15846428622624109063ULL;
_Bool var_12 = (_Bool)0;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 8739102892795433852ULL;
unsigned int var_16 = 1566207193U;
void init() {
}

void checksum() {
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
