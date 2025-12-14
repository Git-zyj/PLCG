#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 601277488497150600LL;
unsigned int var_3 = 2251484070U;
long long int var_6 = -3127325198112244198LL;
unsigned int var_7 = 1694267145U;
long long int var_8 = -6059249884142977089LL;
unsigned long long int var_10 = 1714792652289336752ULL;
unsigned long long int var_13 = 11937123733834225240ULL;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 2310875839U;
unsigned long long int var_17 = 16753940983079259131ULL;
long long int var_18 = 3574148553842654851LL;
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
