#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
_Bool var_7 = (_Bool)0;
unsigned long long int var_10 = 17361386497366821409ULL;
int zero = 0;
unsigned short var_17 = (unsigned short)17042;
unsigned long long int var_18 = 3000700406326134925ULL;
unsigned long long int var_19 = 18430817581430250671ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
