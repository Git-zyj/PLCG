#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 12697505492038594520ULL;
int var_3 = -2087442835;
long long int var_4 = 2104330541283214371LL;
int zero = 0;
long long int var_17 = -2842113800401691027LL;
_Bool var_18 = (_Bool)1;
int var_19 = 2011285549;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
