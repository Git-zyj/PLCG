#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2028411587U;
long long int var_8 = 5701875538491522152LL;
int var_10 = 1546486196;
unsigned int var_12 = 3102559833U;
unsigned short var_14 = (unsigned short)38438;
int var_17 = 78762087;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 15718497565238155642ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
