#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 579567654U;
unsigned int var_6 = 4114644346U;
unsigned char var_7 = (unsigned char)238;
unsigned int var_13 = 1604486130U;
unsigned int var_14 = 1010418648U;
unsigned int var_16 = 2899708270U;
int zero = 0;
unsigned int var_17 = 1184843849U;
unsigned char var_18 = (unsigned char)100;
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
