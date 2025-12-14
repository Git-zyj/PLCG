#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 983613664;
int var_5 = 1665061597;
unsigned char var_7 = (unsigned char)93;
_Bool var_9 = (_Bool)1;
unsigned char var_13 = (unsigned char)209;
long long int var_15 = -3903631450075143890LL;
int zero = 0;
long long int var_16 = -6365069352559852317LL;
int var_17 = -902034758;
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
