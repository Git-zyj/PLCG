#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16763401922963492278ULL;
unsigned int var_5 = 4279604681U;
unsigned char var_6 = (unsigned char)31;
long long int var_9 = -8957837319863788412LL;
long long int var_11 = 8942337408937662529LL;
int zero = 0;
long long int var_12 = -244816426520474216LL;
int var_13 = 999973055;
signed char var_14 = (signed char)53;
void init() {
}

void checksum() {
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
