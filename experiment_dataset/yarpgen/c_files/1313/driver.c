#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 604316680651997953ULL;
int var_2 = 259727673;
_Bool var_7 = (_Bool)0;
int zero = 0;
_Bool var_11 = (_Bool)0;
int var_12 = 2109505534;
int var_13 = 1891409547;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
