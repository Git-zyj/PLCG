#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_11 = (unsigned short)42293;
unsigned short var_15 = (unsigned short)59890;
int zero = 0;
unsigned int var_16 = 2669321337U;
signed char var_17 = (signed char)-50;
unsigned short var_18 = (unsigned short)59216;
unsigned short var_19 = (unsigned short)35209;
void init() {
}

void checksum() {
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
