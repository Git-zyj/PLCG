#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5774959715366021132LL;
unsigned int var_2 = 3610421662U;
short var_3 = (short)2873;
short var_7 = (short)7923;
int zero = 0;
unsigned int var_10 = 112414269U;
long long int var_11 = 4224594670344150189LL;
signed char var_12 = (signed char)-122;
unsigned char var_13 = (unsigned char)4;
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
