#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-48;
unsigned char var_4 = (unsigned char)8;
short var_6 = (short)3805;
signed char var_9 = (signed char)65;
unsigned char var_11 = (unsigned char)243;
int zero = 0;
unsigned char var_15 = (unsigned char)28;
signed char var_16 = (signed char)82;
signed char var_17 = (signed char)-75;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
