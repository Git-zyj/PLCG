#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)42;
_Bool var_6 = (_Bool)0;
unsigned long long int var_8 = 14612996477084888642ULL;
int zero = 0;
unsigned long long int var_10 = 15592474024228716938ULL;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 4897377110471391466ULL;
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
