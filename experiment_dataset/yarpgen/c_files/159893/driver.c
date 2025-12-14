#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1393137627;
unsigned char var_4 = (unsigned char)7;
unsigned char var_16 = (unsigned char)85;
unsigned int var_17 = 694777014U;
int zero = 0;
int var_18 = 1468202987;
unsigned int var_19 = 1599974272U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
