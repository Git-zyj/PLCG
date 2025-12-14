#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 2774452453886391359ULL;
int var_10 = 775560319;
unsigned int var_13 = 2840199439U;
unsigned long long int var_15 = 17992096432101323416ULL;
int zero = 0;
int var_18 = 1414614142;
unsigned int var_19 = 1303896262U;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
