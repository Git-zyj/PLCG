#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 13650147108626452502ULL;
int var_16 = -1572540358;
unsigned int var_17 = 963367097U;
short var_18 = (short)32363;
int zero = 0;
short var_20 = (short)-28736;
_Bool var_21 = (_Bool)0;
long long int var_22 = -8392215615531916459LL;
signed char var_23 = (signed char)103;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
