#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1048032025734767123ULL;
_Bool var_3 = (_Bool)1;
long long int var_4 = 6370002638944522961LL;
unsigned int var_5 = 977671410U;
unsigned short var_7 = (unsigned short)14717;
short var_8 = (short)-10444;
unsigned char var_9 = (unsigned char)255;
int zero = 0;
unsigned char var_11 = (unsigned char)69;
long long int var_12 = 2658243968663121380LL;
unsigned int var_13 = 1960678734U;
long long int var_14 = 6049757028092359906LL;
void init() {
}

void checksum() {
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
