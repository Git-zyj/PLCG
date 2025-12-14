#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)52632;
long long int var_1 = 507075189444776075LL;
int var_3 = -1388335826;
unsigned int var_6 = 1983039896U;
long long int var_7 = -5936355867115914937LL;
int zero = 0;
_Bool var_10 = (_Bool)0;
long long int var_11 = 7100392878788734640LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
