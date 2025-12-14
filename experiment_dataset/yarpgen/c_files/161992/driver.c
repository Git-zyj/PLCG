#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3795143380U;
unsigned int var_1 = 1579477746U;
short var_6 = (short)-232;
long long int var_9 = 891437021718942908LL;
unsigned int var_10 = 4148182483U;
short var_18 = (short)14996;
int zero = 0;
unsigned char var_19 = (unsigned char)165;
long long int var_20 = 9037612473460790313LL;
short var_21 = (short)-8078;
unsigned int var_22 = 3264901310U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
