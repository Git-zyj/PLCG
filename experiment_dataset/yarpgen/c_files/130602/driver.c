#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 11863156781937507379ULL;
signed char var_5 = (signed char)-41;
long long int var_7 = 4847375280362998107LL;
short var_8 = (short)11824;
int zero = 0;
signed char var_11 = (signed char)49;
int var_12 = -555458080;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
