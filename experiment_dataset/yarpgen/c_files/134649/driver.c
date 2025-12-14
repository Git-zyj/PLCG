#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_2 = 1365556761U;
unsigned short var_6 = (unsigned short)26178;
_Bool var_9 = (_Bool)0;
unsigned long long int var_13 = 5996555683909906157ULL;
int zero = 0;
long long int var_15 = 3799737842732130584LL;
unsigned char var_16 = (unsigned char)233;
unsigned long long int var_17 = 14505310725262006466ULL;
void init() {
}

void checksum() {
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
