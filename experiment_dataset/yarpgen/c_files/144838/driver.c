#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)101;
short var_2 = (short)9361;
unsigned int var_3 = 1632647826U;
_Bool var_4 = (_Bool)1;
short var_8 = (short)846;
int zero = 0;
long long int var_13 = 8076157499261204702LL;
long long int var_14 = 6047253677461771568LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
