#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
short var_11 = (short)7021;
unsigned char var_13 = (unsigned char)226;
int var_16 = 444867494;
int zero = 0;
signed char var_17 = (signed char)92;
long long int var_18 = -3483028294169838351LL;
int var_19 = 164048207;
unsigned long long int var_20 = 11267161173298375995ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
