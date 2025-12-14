#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
int var_3 = -2089762223;
long long int var_6 = 6061704748905810891LL;
long long int var_7 = -7249327671050527515LL;
_Bool var_10 = (_Bool)1;
int zero = 0;
signed char var_14 = (signed char)113;
unsigned int var_15 = 3158623747U;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
