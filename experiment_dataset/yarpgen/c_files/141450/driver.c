#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_3 = 2686955591U;
_Bool var_5 = (_Bool)0;
unsigned long long int var_12 = 585894307521260967ULL;
int zero = 0;
int var_15 = -1566306794;
unsigned int var_16 = 1051136194U;
long long int var_17 = 6162048356087071940LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
