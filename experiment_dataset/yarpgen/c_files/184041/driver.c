#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -420650069;
unsigned int var_8 = 544528854U;
_Bool var_9 = (_Bool)1;
unsigned int var_11 = 1077408551U;
unsigned long long int var_13 = 12892625344767005289ULL;
unsigned int var_14 = 2615799488U;
int zero = 0;
short var_17 = (short)5741;
signed char var_18 = (signed char)41;
unsigned int var_19 = 3495239102U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
