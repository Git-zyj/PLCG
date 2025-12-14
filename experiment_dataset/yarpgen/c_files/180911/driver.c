#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -175206408;
_Bool var_6 = (_Bool)0;
int var_8 = -207219052;
int zero = 0;
int var_11 = -1949688920;
long long int var_12 = 4913303533059112610LL;
int var_13 = -700539607;
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
