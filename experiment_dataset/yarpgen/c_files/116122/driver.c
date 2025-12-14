#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -2401144633904776507LL;
unsigned long long int var_7 = 15147837004579285528ULL;
unsigned long long int var_8 = 6243778006068386881ULL;
int zero = 0;
unsigned long long int var_11 = 17978180015766694285ULL;
_Bool var_12 = (_Bool)0;
int var_13 = 1473954717;
unsigned long long int var_14 = 6997426279180963697ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
