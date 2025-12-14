#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)9194;
long long int var_2 = 7617011174995042934LL;
unsigned short var_9 = (unsigned short)19724;
unsigned int var_11 = 4023294167U;
unsigned long long int var_14 = 7332689742482384245ULL;
int zero = 0;
_Bool var_16 = (_Bool)1;
long long int var_17 = -3235101842711591780LL;
unsigned long long int var_18 = 2032404556415806130ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
