#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)29888;
int var_3 = 1646465660;
unsigned char var_4 = (unsigned char)45;
signed char var_6 = (signed char)69;
short var_9 = (short)6860;
unsigned int var_11 = 859653241U;
int zero = 0;
signed char var_12 = (signed char)53;
short var_13 = (short)-31565;
signed char var_14 = (signed char)-43;
unsigned char var_15 = (unsigned char)5;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
