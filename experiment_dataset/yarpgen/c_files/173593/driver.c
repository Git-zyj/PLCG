#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned int var_6 = 2759824392U;
unsigned char var_9 = (unsigned char)46;
unsigned long long int var_11 = 14797982746883498399ULL;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned long long int var_18 = 2952609551312134449ULL;
_Bool var_19 = (_Bool)0;
int var_20 = 2070556616;
unsigned char var_21 = (unsigned char)201;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
