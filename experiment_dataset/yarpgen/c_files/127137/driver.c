#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_2 = 1401633950U;
int var_4 = -723715927;
unsigned int var_7 = 1515475811U;
short var_9 = (short)-9389;
int var_11 = 1557625115;
int zero = 0;
int var_12 = -8634659;
int var_13 = 1199880037;
short var_14 = (short)-29973;
unsigned short var_15 = (unsigned short)43805;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
