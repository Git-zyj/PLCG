#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2451039494U;
unsigned long long int var_3 = 9205471182301113817ULL;
unsigned int var_4 = 547600439U;
unsigned int var_5 = 3706644066U;
unsigned char var_6 = (unsigned char)94;
short var_8 = (short)8576;
short var_11 = (short)32028;
unsigned char var_12 = (unsigned char)73;
int zero = 0;
unsigned char var_13 = (unsigned char)56;
unsigned int var_14 = 199959987U;
unsigned char var_15 = (unsigned char)184;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
