#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2585559627U;
short var_3 = (short)27655;
unsigned char var_11 = (unsigned char)244;
int zero = 0;
unsigned int var_16 = 289862056U;
unsigned int var_17 = 585999288U;
signed char var_18 = (signed char)-67;
unsigned int var_19 = 3248945952U;
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
