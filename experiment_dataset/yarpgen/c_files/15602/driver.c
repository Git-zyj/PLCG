#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)33790;
_Bool var_4 = (_Bool)1;
_Bool var_5 = (_Bool)0;
int var_10 = -1170322302;
int zero = 0;
unsigned long long int var_11 = 9999571843349594081ULL;
int var_12 = -1745450760;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
