#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned long long int var_4 = 1399018152465994505ULL;
long long int var_6 = -8777454063744491756LL;
unsigned int var_16 = 3863329120U;
int zero = 0;
unsigned short var_17 = (unsigned short)39006;
unsigned long long int var_18 = 898805359775727780ULL;
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
