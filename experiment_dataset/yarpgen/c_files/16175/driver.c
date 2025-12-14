#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)22;
unsigned int var_5 = 2755344789U;
unsigned char var_10 = (unsigned char)96;
_Bool var_17 = (_Bool)0;
int zero = 0;
signed char var_20 = (signed char)36;
unsigned short var_21 = (unsigned short)33806;
unsigned int var_22 = 3677473315U;
unsigned short var_23 = (unsigned short)27479;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
