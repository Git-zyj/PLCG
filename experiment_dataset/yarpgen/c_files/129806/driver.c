#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -8095198626791792056LL;
unsigned long long int var_7 = 11745427667227556214ULL;
unsigned int var_14 = 2725433451U;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned int var_18 = 645980729U;
long long int var_19 = -724000766621753247LL;
void init() {
}

void checksum() {
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
