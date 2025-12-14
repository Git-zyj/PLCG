#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)204;
signed char var_2 = (signed char)-3;
unsigned char var_6 = (unsigned char)77;
signed char var_7 = (signed char)-116;
int var_8 = 1403925925;
signed char var_9 = (signed char)0;
int zero = 0;
unsigned char var_11 = (unsigned char)176;
unsigned int var_12 = 1645948256U;
short var_13 = (short)-32441;
short var_14 = (short)20621;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
