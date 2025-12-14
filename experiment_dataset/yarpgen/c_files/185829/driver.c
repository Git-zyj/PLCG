#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1049603209083627701LL;
unsigned int var_2 = 3524177715U;
unsigned long long int var_5 = 1898085398164206216ULL;
unsigned int var_9 = 2275460100U;
int var_10 = -2051987512;
int var_11 = 2027522944;
long long int var_12 = 5977809153124811683LL;
signed char var_14 = (signed char)-13;
int zero = 0;
unsigned short var_15 = (unsigned short)46989;
short var_16 = (short)22275;
signed char var_17 = (signed char)-7;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
