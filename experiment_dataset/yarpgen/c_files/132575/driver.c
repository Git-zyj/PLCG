#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned int var_3 = 1832484630U;
int var_4 = -1945380573;
unsigned int var_8 = 3290990559U;
unsigned int var_10 = 3868797485U;
unsigned short var_12 = (unsigned short)8778;
long long int var_13 = 3856499315055218406LL;
int zero = 0;
long long int var_14 = -2094306122601868407LL;
long long int var_15 = 1523531934452070817LL;
void init() {
}

void checksum() {
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
