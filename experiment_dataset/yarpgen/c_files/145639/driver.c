#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned int var_2 = 125057012U;
unsigned long long int var_5 = 10752182473875988603ULL;
unsigned short var_8 = (unsigned short)8265;
int zero = 0;
unsigned long long int var_10 = 11956516096714649515ULL;
int var_11 = 552586967;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
