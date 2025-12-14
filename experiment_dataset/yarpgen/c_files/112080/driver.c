#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)60942;
unsigned int var_1 = 1432974367U;
unsigned int var_4 = 1287878256U;
_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 12983588725677582808ULL;
_Bool var_8 = (_Bool)0;
unsigned int var_11 = 3797353959U;
int var_13 = 439968596;
unsigned long long int var_17 = 6420096516306175185ULL;
int zero = 0;
signed char var_19 = (signed char)87;
unsigned short var_20 = (unsigned short)33731;
unsigned char var_21 = (unsigned char)7;
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
