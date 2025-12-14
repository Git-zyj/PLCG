#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -527073612;
unsigned int var_2 = 8872171U;
signed char var_3 = (signed char)51;
long long int var_6 = 3993255400112736553LL;
unsigned int var_8 = 1621444655U;
int zero = 0;
int var_10 = 995599381;
_Bool var_11 = (_Bool)1;
short var_12 = (short)5636;
long long int var_13 = 7209002554838059204LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
