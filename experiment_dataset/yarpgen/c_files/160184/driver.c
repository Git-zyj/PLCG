#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_2 = (unsigned short)48446;
_Bool var_3 = (_Bool)1;
long long int var_4 = 5756327772886661214LL;
long long int var_6 = 3631968482052580428LL;
short var_7 = (short)-28182;
long long int var_12 = 2245792558268343206LL;
int zero = 0;
unsigned int var_16 = 909850288U;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
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
