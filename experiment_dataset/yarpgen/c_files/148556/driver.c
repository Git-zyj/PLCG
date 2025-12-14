#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)0;
unsigned short var_6 = (unsigned short)5013;
int var_8 = -2022807696;
int var_10 = 1805890488;
short var_14 = (short)-18078;
int zero = 0;
signed char var_16 = (signed char)-69;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 6826893500242004697ULL;
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
