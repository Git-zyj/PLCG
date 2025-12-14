#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)1;
_Bool var_7 = (_Bool)1;
int var_11 = -1247273316;
long long int var_13 = 1642617753054438396LL;
int var_15 = 1040275952;
int zero = 0;
unsigned int var_16 = 327831576U;
int var_17 = -577503287;
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
