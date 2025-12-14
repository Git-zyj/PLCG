#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1349917713687511229ULL;
_Bool var_2 = (_Bool)0;
long long int var_13 = -7538836166007346954LL;
_Bool var_14 = (_Bool)1;
int zero = 0;
short var_16 = (short)-1851;
int var_17 = 1455971264;
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
