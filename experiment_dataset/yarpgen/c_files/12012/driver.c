#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)48;
signed char var_1 = (signed char)105;
unsigned long long int var_2 = 10000480222904946605ULL;
unsigned int var_3 = 3857443751U;
long long int var_8 = 6402270397925482542LL;
long long int var_9 = -6972207372434419709LL;
unsigned long long int var_11 = 9268957868835842800ULL;
unsigned long long int var_13 = 1903940095750127312ULL;
unsigned long long int var_17 = 2320459805554559798ULL;
int zero = 0;
int var_19 = -1062175951;
unsigned long long int var_20 = 17142577306136760323ULL;
unsigned char var_21 = (unsigned char)35;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
