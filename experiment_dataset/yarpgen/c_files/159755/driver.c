#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1972582206491595248LL;
long long int var_1 = 2030279256689472388LL;
_Bool var_2 = (_Bool)0;
long long int var_3 = -844306523173176837LL;
unsigned short var_5 = (unsigned short)11748;
unsigned short var_7 = (unsigned short)34213;
long long int var_9 = 8703806118046614309LL;
long long int var_10 = 4288428950428462469LL;
int zero = 0;
unsigned short var_13 = (unsigned short)6306;
long long int var_14 = -6079587405477517073LL;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)0;
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
