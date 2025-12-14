#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)24335;
unsigned long long int var_3 = 11324671310467871772ULL;
int zero = 0;
long long int var_15 = 7122163325459488355LL;
_Bool var_16 = (_Bool)1;
int var_17 = -949235481;
unsigned int var_18 = 2706460863U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
