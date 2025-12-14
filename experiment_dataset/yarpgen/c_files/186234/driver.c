#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-21482;
_Bool var_3 = (_Bool)0;
unsigned int var_5 = 3130555801U;
_Bool var_7 = (_Bool)0;
int zero = 0;
unsigned short var_10 = (unsigned short)65240;
unsigned long long int var_11 = 12052136858979693290ULL;
unsigned long long int var_12 = 14662992773791353101ULL;
long long int var_13 = 1187363705879607196LL;
signed char var_14 = (signed char)124;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
