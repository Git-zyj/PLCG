#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 260759113U;
unsigned long long int var_7 = 17166999957071663461ULL;
_Bool var_10 = (_Bool)1;
unsigned char var_14 = (unsigned char)243;
int var_15 = -1911622816;
int zero = 0;
unsigned int var_17 = 3575734297U;
long long int var_18 = -580326531912548658LL;
void init() {
}

void checksum() {
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
