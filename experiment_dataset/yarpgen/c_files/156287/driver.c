#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3040562009120285751LL;
long long int var_4 = -5570190093627293650LL;
signed char var_5 = (signed char)33;
long long int var_10 = 4374486050717790040LL;
int zero = 0;
int var_12 = 636040840;
long long int var_13 = -6638278676979090658LL;
void init() {
}

void checksum() {
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
