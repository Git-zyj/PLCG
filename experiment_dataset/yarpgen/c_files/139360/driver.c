#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12007668660154601283ULL;
unsigned int var_2 = 2796563369U;
unsigned int var_3 = 3914466601U;
unsigned long long int var_4 = 15914795734390328394ULL;
short var_5 = (short)-28944;
unsigned short var_6 = (unsigned short)12696;
long long int var_7 = 4768189847626999274LL;
short var_8 = (short)9660;
int zero = 0;
signed char var_11 = (signed char)13;
unsigned int var_12 = 1804457883U;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
