#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_3 = (_Bool)1;
unsigned long long int var_7 = 13201994492323368646ULL;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned int var_12 = 2925378164U;
long long int var_13 = -2544159189473217748LL;
unsigned short var_14 = (unsigned short)52440;
unsigned long long int var_15 = 8852063680252094641ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
