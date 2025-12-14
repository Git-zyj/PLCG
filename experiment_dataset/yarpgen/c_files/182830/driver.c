#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)10065;
signed char var_1 = (signed char)68;
short var_2 = (short)-2796;
long long int var_3 = 3460986306134696762LL;
long long int var_7 = -1460039636934936381LL;
unsigned char var_10 = (unsigned char)67;
int zero = 0;
unsigned long long int var_12 = 13273875335187373311ULL;
short var_13 = (short)30629;
long long int var_14 = -4374415462881680878LL;
unsigned long long int var_15 = 5034631877908717171ULL;
long long int var_16 = 8899683322419379352LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
