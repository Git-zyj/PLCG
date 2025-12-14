#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 752408111U;
long long int var_5 = -8251725393967787611LL;
unsigned long long int var_7 = 18420713694397100416ULL;
long long int var_8 = -6308656287189591555LL;
int zero = 0;
unsigned int var_11 = 404862577U;
long long int var_12 = 2234627120140444216LL;
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
