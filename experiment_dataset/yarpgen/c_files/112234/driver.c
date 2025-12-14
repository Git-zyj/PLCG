#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)219;
unsigned short var_2 = (unsigned short)21333;
unsigned char var_5 = (unsigned char)40;
unsigned char var_14 = (unsigned char)28;
int zero = 0;
signed char var_16 = (signed char)9;
int var_17 = 1646903246;
unsigned short var_18 = (unsigned short)6396;
unsigned int var_19 = 341700118U;
long long int var_20 = 279156488052780554LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
