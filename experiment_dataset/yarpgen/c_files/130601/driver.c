#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)-13028;
unsigned int var_10 = 4013329560U;
int var_11 = -1408217707;
short var_14 = (short)9090;
unsigned short var_17 = (unsigned short)62887;
int zero = 0;
unsigned short var_18 = (unsigned short)16500;
_Bool var_19 = (_Bool)0;
long long int var_20 = 1949406997144804231LL;
void init() {
}

void checksum() {
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
