#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4032528031U;
unsigned int var_4 = 3788020905U;
unsigned char var_9 = (unsigned char)127;
unsigned char var_11 = (unsigned char)82;
unsigned int var_13 = 1731253349U;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)1;
unsigned int var_18 = 305421215U;
int zero = 0;
unsigned int var_20 = 172285923U;
signed char var_21 = (signed char)58;
void init() {
}

void checksum() {
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
