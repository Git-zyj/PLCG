#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)19949;
signed char var_7 = (signed char)-48;
int var_8 = 146126733;
int var_9 = 977138067;
unsigned char var_10 = (unsigned char)164;
short var_11 = (short)14999;
int var_14 = 308133688;
signed char var_16 = (signed char)-7;
int zero = 0;
short var_17 = (short)29256;
unsigned char var_18 = (unsigned char)114;
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
