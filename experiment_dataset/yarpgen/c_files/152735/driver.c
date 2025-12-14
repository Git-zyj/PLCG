#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3264770835007754787ULL;
long long int var_1 = -2545105549856914543LL;
unsigned short var_4 = (unsigned short)53544;
signed char var_12 = (signed char)-23;
long long int var_17 = -1485033961760005023LL;
int zero = 0;
unsigned int var_19 = 56414842U;
unsigned int var_20 = 2462466632U;
unsigned char var_21 = (unsigned char)235;
signed char var_22 = (signed char)-87;
unsigned int var_23 = 365072720U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
