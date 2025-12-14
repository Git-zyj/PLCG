#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2314950561088624746LL;
short var_3 = (short)10658;
unsigned char var_5 = (unsigned char)189;
unsigned long long int var_7 = 16378397732782860022ULL;
int zero = 0;
short var_13 = (short)15828;
int var_14 = 1735957946;
unsigned short var_15 = (unsigned short)13340;
_Bool var_16 = (_Bool)1;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
