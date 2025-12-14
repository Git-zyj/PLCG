#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned long long int var_14 = 3322985029518651203ULL;
int var_17 = 1852882260;
int zero = 0;
unsigned long long int var_19 = 11085280615705558290ULL;
int var_20 = -1742444360;
long long int var_21 = 8786818924450449283LL;
unsigned long long int var_22 = 16425422305794859655ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
