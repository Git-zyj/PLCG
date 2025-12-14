#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1533606865U;
short var_3 = (short)3627;
unsigned int var_6 = 1724855202U;
unsigned long long int var_10 = 17009254047490065721ULL;
unsigned short var_12 = (unsigned short)6528;
signed char var_13 = (signed char)84;
unsigned long long int var_15 = 10497656562026519581ULL;
_Bool var_16 = (_Bool)1;
int zero = 0;
int var_17 = -1636165808;
unsigned short var_18 = (unsigned short)4876;
void init() {
}

void checksum() {
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
