#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)200;
unsigned short var_10 = (unsigned short)58723;
unsigned int var_11 = 2182121182U;
unsigned int var_12 = 225194111U;
unsigned short var_17 = (unsigned short)41149;
int zero = 0;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)-113;
unsigned char var_20 = (unsigned char)214;
void init() {
}

void checksum() {
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
