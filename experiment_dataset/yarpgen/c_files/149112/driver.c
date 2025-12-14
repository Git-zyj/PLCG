#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned char var_5 = (unsigned char)225;
signed char var_9 = (signed char)-67;
int zero = 0;
unsigned short var_14 = (unsigned short)11071;
unsigned int var_15 = 3777680797U;
unsigned char var_16 = (unsigned char)29;
unsigned char var_17 = (unsigned char)205;
unsigned short var_18 = (unsigned short)6973;
signed char var_19 = (signed char)-6;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
