#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_10 = (_Bool)0;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 4112577798U;
unsigned int var_15 = 2822416458U;
unsigned int var_17 = 3128838919U;
int zero = 0;
_Bool var_20 = (_Bool)1;
short var_21 = (short)13571;
long long int var_22 = 3605055400135081803LL;
void init() {
}

void checksum() {
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
