#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)11022;
short var_1 = (short)-14187;
unsigned int var_5 = 3026359204U;
long long int var_11 = -6482010637152848920LL;
_Bool var_13 = (_Bool)0;
int zero = 0;
short var_14 = (short)20161;
long long int var_15 = 8913658356724628275LL;
short var_16 = (short)-23087;
long long int var_17 = -8845517928923244578LL;
void init() {
}

void checksum() {
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
