#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_5 = -935868173;
short var_8 = (short)-28925;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned long long int var_16 = 8188220211407995280ULL;
long long int var_17 = -1775185164350269277LL;
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
