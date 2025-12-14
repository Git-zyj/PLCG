#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 30266838U;
signed char var_4 = (signed char)-12;
signed char var_6 = (signed char)-52;
int var_7 = 251497847;
int var_9 = -1826379148;
unsigned long long int var_15 = 5363451090667084365ULL;
int zero = 0;
signed char var_17 = (signed char)-5;
unsigned short var_18 = (unsigned short)27290;
void init() {
}

void checksum() {
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
