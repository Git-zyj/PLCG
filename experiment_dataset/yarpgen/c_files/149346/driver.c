#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
long long int var_5 = -4157768342864156627LL;
signed char var_7 = (signed char)49;
int var_14 = 1195551700;
int zero = 0;
int var_15 = -1458544876;
unsigned short var_16 = (unsigned short)39753;
int var_17 = 1841826985;
unsigned char var_18 = (unsigned char)240;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
