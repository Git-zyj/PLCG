#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 4631286364249082866LL;
_Bool var_13 = (_Bool)0;
int zero = 0;
long long int var_19 = -5704846459226746273LL;
_Bool var_20 = (_Bool)1;
long long int var_21 = -1506636874420072493LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
