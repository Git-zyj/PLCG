#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_10 = (short)26443;
long long int var_11 = -7284209499501451191LL;
int zero = 0;
unsigned short var_16 = (unsigned short)14889;
unsigned short var_17 = (unsigned short)43703;
short var_18 = (short)-8743;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
