#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-25107;
unsigned short var_1 = (unsigned short)30785;
unsigned int var_2 = 3171289917U;
unsigned int var_3 = 3494227227U;
long long int var_4 = -2276962318190998078LL;
unsigned short var_5 = (unsigned short)49598;
int var_6 = -226298075;
signed char var_7 = (signed char)-23;
unsigned int var_8 = 1016364049U;
unsigned int var_9 = 289331282U;
int zero = 0;
unsigned int var_10 = 4186808359U;
unsigned short var_11 = (unsigned short)18032;
long long int var_12 = 7672703761979832398LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
