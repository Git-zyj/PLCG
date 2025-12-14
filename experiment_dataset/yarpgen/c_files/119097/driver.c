#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7394188211384348131LL;
int var_1 = 1184718268;
int var_3 = 556335811;
unsigned long long int var_4 = 4601096150140581529ULL;
int var_7 = 637779510;
int zero = 0;
unsigned int var_11 = 3248329146U;
int var_12 = 365142320;
_Bool var_13 = (_Bool)0;
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
