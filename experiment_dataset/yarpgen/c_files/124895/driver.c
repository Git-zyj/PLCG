#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)63995;
unsigned int var_5 = 2127498764U;
unsigned long long int var_10 = 6401976065577243051ULL;
_Bool var_12 = (_Bool)0;
int zero = 0;
int var_13 = 1852146375;
short var_14 = (short)2855;
int var_15 = -2081972362;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
