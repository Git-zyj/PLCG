#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1282999952;
unsigned short var_8 = (unsigned short)29522;
unsigned int var_12 = 817876166U;
long long int var_13 = -5143526618954030919LL;
_Bool var_14 = (_Bool)1;
int var_15 = -1169037071;
int zero = 0;
unsigned int var_16 = 2496056578U;
long long int var_17 = -7854595416976806672LL;
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
