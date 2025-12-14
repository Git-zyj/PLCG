#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -436291130;
unsigned long long int var_4 = 7271548716886396431ULL;
signed char var_7 = (signed char)4;
unsigned char var_11 = (unsigned char)211;
unsigned long long int var_13 = 11535439730182532205ULL;
unsigned long long int var_14 = 1464886458353145220ULL;
int zero = 0;
_Bool var_19 = (_Bool)1;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
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
