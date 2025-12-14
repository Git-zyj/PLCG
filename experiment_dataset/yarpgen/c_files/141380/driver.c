#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1972584219;
_Bool var_4 = (_Bool)0;
long long int var_12 = 8691269693666379387LL;
unsigned int var_13 = 3385846481U;
int zero = 0;
long long int var_15 = -4979487959422296024LL;
short var_16 = (short)-24184;
void init() {
}

void checksum() {
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
