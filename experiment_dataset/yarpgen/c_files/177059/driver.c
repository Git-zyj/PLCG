#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5611915029443140803LL;
unsigned int var_6 = 2870376928U;
unsigned long long int var_10 = 17261270481307242371ULL;
unsigned char var_14 = (unsigned char)33;
unsigned short var_15 = (unsigned short)48543;
int zero = 0;
long long int var_16 = -6410676435609670693LL;
short var_17 = (short)-24750;
short var_18 = (short)-20478;
unsigned short var_19 = (unsigned short)34011;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
