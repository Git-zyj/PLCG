#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)12924;
long long int var_3 = 5866349854428997819LL;
unsigned short var_4 = (unsigned short)18643;
unsigned long long int var_11 = 14428954592723974614ULL;
int zero = 0;
long long int var_12 = -6926280211598687283LL;
int var_13 = -366503312;
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
