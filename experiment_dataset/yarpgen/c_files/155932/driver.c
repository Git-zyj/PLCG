#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)7238;
unsigned short var_5 = (unsigned short)8712;
int var_8 = 1772659144;
_Bool var_11 = (_Bool)0;
int var_13 = -573194504;
int zero = 0;
unsigned short var_14 = (unsigned short)23374;
unsigned int var_15 = 3733689298U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
