#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-12;
int var_6 = 1961088832;
unsigned long long int var_7 = 12136650733403293187ULL;
unsigned int var_14 = 3297519405U;
_Bool var_15 = (_Bool)0;
unsigned short var_17 = (unsigned short)11925;
int zero = 0;
unsigned long long int var_20 = 403853963395675451ULL;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
