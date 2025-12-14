#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned int var_3 = 1208607416U;
unsigned int var_5 = 677372314U;
unsigned char var_10 = (unsigned char)246;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned long long int var_12 = 10354964136882732139ULL;
unsigned short var_13 = (unsigned short)36265;
signed char var_14 = (signed char)46;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
