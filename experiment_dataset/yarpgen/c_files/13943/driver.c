#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)56381;
long long int var_1 = -2020521499049787624LL;
long long int var_3 = 4083734163039342324LL;
_Bool var_7 = (_Bool)0;
unsigned long long int var_10 = 11948481698482836561ULL;
int zero = 0;
unsigned int var_11 = 2911139499U;
long long int var_12 = 1774718238562086185LL;
int var_13 = -1859499375;
void init() {
}

void checksum() {
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
