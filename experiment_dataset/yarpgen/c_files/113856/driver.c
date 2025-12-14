#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
int var_15 = 1964324162;
int var_17 = 1510864465;
long long int var_18 = -6271689030702015624LL;
int zero = 0;
unsigned long long int var_19 = 9975022485450264984ULL;
int var_20 = -1913753243;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
