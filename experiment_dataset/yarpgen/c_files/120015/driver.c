#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
short var_2 = (short)10510;
int var_3 = 754734323;
unsigned short var_12 = (unsigned short)49538;
long long int var_13 = -3627559373458532149LL;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 1330780558U;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 15529702299326719232ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
