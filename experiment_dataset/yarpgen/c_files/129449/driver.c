#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 6842758938547349595LL;
short var_3 = (short)10411;
short var_8 = (short)28467;
int zero = 0;
short var_13 = (short)-13598;
short var_14 = (short)30427;
short var_15 = (short)-12439;
long long int var_16 = 2035024784843767569LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
