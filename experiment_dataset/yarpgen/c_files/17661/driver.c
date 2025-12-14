#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_1 = 9024767419036080475LL;
_Bool var_2 = (_Bool)1;
unsigned short var_3 = (unsigned short)52967;
unsigned short var_5 = (unsigned short)18186;
short var_7 = (short)696;
unsigned int var_8 = 3236612706U;
long long int var_9 = 8359861291062300995LL;
int zero = 0;
unsigned long long int var_14 = 11455004288843068265ULL;
unsigned long long int var_15 = 5261151307028241204ULL;
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
