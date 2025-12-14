#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_1 = (_Bool)0;
long long int var_2 = -2035414020725472071LL;
_Bool var_3 = (_Bool)1;
unsigned short var_4 = (unsigned short)9216;
long long int var_5 = -8908742078974206536LL;
_Bool var_7 = (_Bool)0;
unsigned int var_13 = 1619503406U;
unsigned short var_14 = (unsigned short)53293;
int zero = 0;
unsigned char var_15 = (unsigned char)62;
signed char var_16 = (signed char)(-127 - 1);
short var_17 = (short)-26576;
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
