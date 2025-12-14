#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4636960174802562775LL;
unsigned int var_5 = 103114758U;
unsigned short var_6 = (unsigned short)34805;
int var_11 = 65934912;
unsigned int var_12 = 831817909U;
long long int var_17 = 1274994086648964005LL;
int zero = 0;
unsigned short var_18 = (unsigned short)53404;
_Bool var_19 = (_Bool)1;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
