#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2524980266U;
signed char var_1 = (signed char)-71;
unsigned int var_6 = 3547479573U;
int var_8 = 1671800908;
signed char var_10 = (signed char)-2;
int zero = 0;
unsigned short var_16 = (unsigned short)18386;
signed char var_17 = (signed char)114;
signed char var_18 = (signed char)-10;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
