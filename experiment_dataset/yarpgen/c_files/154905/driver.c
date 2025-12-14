#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = -983301167;
_Bool var_8 = (_Bool)1;
int var_12 = 532283411;
int var_16 = -110668821;
int var_18 = -1842686834;
int zero = 0;
int var_20 = 1619857488;
_Bool var_21 = (_Bool)0;
int var_22 = -1473008707;
_Bool var_23 = (_Bool)1;
int var_24 = -1460395781;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
