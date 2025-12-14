#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)161;
unsigned int var_2 = 2787353861U;
unsigned int var_3 = 534872728U;
int var_5 = -481022636;
int zero = 0;
long long int var_10 = -2243289141668507422LL;
unsigned int var_11 = 1364263559U;
unsigned char var_12 = (unsigned char)90;
unsigned char var_13 = (unsigned char)3;
unsigned char var_14 = (unsigned char)42;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
