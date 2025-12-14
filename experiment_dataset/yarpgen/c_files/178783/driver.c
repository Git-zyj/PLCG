#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 346138745;
_Bool var_4 = (_Bool)1;
_Bool var_5 = (_Bool)1;
_Bool var_6 = (_Bool)0;
signed char var_7 = (signed char)26;
unsigned char var_8 = (unsigned char)213;
int var_9 = 1813437957;
int zero = 0;
unsigned char var_14 = (unsigned char)3;
_Bool var_15 = (_Bool)0;
signed char var_16 = (signed char)-122;
unsigned char var_17 = (unsigned char)127;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
