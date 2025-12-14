#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1867584446;
_Bool var_7 = (_Bool)0;
unsigned int var_9 = 3236686197U;
long long int var_10 = -1578426058151763756LL;
_Bool var_15 = (_Bool)0;
int zero = 0;
_Bool var_20 = (_Bool)0;
long long int var_21 = 563043921571993514LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
