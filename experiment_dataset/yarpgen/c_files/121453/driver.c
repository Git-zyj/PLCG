#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)42834;
unsigned short var_11 = (unsigned short)22693;
signed char var_13 = (signed char)92;
unsigned short var_17 = (unsigned short)52149;
int zero = 0;
unsigned short var_19 = (unsigned short)42279;
unsigned int var_20 = 19692203U;
void init() {
}

void checksum() {
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
