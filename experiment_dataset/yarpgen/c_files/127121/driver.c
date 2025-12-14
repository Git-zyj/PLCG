#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
long long int var_4 = -5394002024287144944LL;
unsigned long long int var_5 = 11547015769566605209ULL;
long long int var_9 = 4636219990515417552LL;
unsigned long long int var_11 = 10680803569086592651ULL;
int zero = 0;
unsigned long long int var_13 = 6975605717149874334ULL;
_Bool var_14 = (_Bool)0;
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
