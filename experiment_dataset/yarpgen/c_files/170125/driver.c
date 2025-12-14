#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)61465;
long long int var_10 = -7211218053235831454LL;
int var_12 = 1333842510;
_Bool var_15 = (_Bool)1;
int zero = 0;
long long int var_17 = 2621650516688493158LL;
long long int var_18 = -2194720085082907710LL;
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
