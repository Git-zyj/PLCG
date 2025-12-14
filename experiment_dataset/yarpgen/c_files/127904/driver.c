#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 3081481081U;
_Bool var_8 = (_Bool)0;
unsigned int var_10 = 4055997242U;
unsigned int var_12 = 1814527005U;
int zero = 0;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 2382881278U;
unsigned int var_17 = 2548891739U;
unsigned int var_18 = 1315983229U;
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
