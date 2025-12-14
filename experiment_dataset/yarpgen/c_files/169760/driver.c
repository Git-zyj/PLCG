#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
int var_2 = -1445716521;
long long int var_3 = -1983505395274628382LL;
int var_5 = 91585211;
_Bool var_7 = (_Bool)1;
_Bool var_10 = (_Bool)1;
int zero = 0;
short var_11 = (short)-30252;
_Bool var_12 = (_Bool)0;
int var_13 = -1761599236;
unsigned char var_14 = (unsigned char)53;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
