#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 13440051776283547752ULL;
unsigned long long int var_6 = 6662386215007108521ULL;
int var_8 = 2092442094;
_Bool var_10 = (_Bool)0;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 8050321100515751739ULL;
int var_17 = 1235159182;
int zero = 0;
_Bool var_18 = (_Bool)1;
long long int var_19 = 3459714125034614989LL;
_Bool var_20 = (_Bool)1;
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
