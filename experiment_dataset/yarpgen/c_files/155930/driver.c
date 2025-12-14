#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 7010632877225345634LL;
long long int var_3 = 8741036271063427992LL;
_Bool var_13 = (_Bool)0;
short var_14 = (short)-19256;
unsigned short var_15 = (unsigned short)11886;
int zero = 0;
int var_18 = -38154729;
long long int var_19 = 2791918695594874643LL;
int var_20 = -7663478;
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
