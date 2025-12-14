#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned int var_4 = 1039374812U;
_Bool var_5 = (_Bool)0;
int zero = 0;
unsigned long long int var_15 = 9632196436504954906ULL;
short var_16 = (short)32273;
unsigned int var_17 = 3111538080U;
unsigned int var_18 = 3484845749U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
