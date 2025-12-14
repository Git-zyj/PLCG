#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-5234;
unsigned char var_1 = (unsigned char)221;
unsigned long long int var_2 = 8387949712640946671ULL;
unsigned long long int var_3 = 9281047143097635566ULL;
int var_5 = 1692821163;
_Bool var_8 = (_Bool)1;
unsigned long long int var_9 = 8760469336942342379ULL;
int zero = 0;
unsigned short var_10 = (unsigned short)33445;
_Bool var_11 = (_Bool)0;
_Bool var_12 = (_Bool)0;
unsigned short var_13 = (unsigned short)7286;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
