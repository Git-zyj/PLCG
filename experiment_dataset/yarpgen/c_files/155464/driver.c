#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)0;
long long int var_6 = 3543743663697697822LL;
int var_11 = -1604666122;
short var_14 = (short)-18400;
int zero = 0;
unsigned int var_18 = 3265053994U;
unsigned long long int var_19 = 14075707446542205533ULL;
short var_20 = (short)6432;
unsigned long long int var_21 = 12411702084984221747ULL;
unsigned short var_22 = (unsigned short)49387;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
