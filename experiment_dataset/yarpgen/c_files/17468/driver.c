#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)5756;
long long int var_1 = -1603521874390850503LL;
signed char var_3 = (signed char)46;
long long int var_5 = 8219708507859131358LL;
unsigned short var_7 = (unsigned short)5283;
unsigned short var_11 = (unsigned short)5707;
unsigned short var_12 = (unsigned short)16938;
int zero = 0;
signed char var_13 = (signed char)58;
signed char var_14 = (signed char)122;
short var_15 = (short)-7054;
void init() {
}

void checksum() {
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
