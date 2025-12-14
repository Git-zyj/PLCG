#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2092292419U;
long long int var_4 = 336230730941316034LL;
_Bool var_5 = (_Bool)1;
_Bool var_7 = (_Bool)1;
unsigned int var_10 = 357936990U;
int zero = 0;
unsigned long long int var_13 = 8535914488243343764ULL;
short var_14 = (short)3649;
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
