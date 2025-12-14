#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)96;
signed char var_4 = (signed char)91;
unsigned char var_6 = (unsigned char)212;
signed char var_10 = (signed char)-3;
unsigned char var_11 = (unsigned char)118;
unsigned short var_12 = (unsigned short)53750;
int zero = 0;
unsigned char var_18 = (unsigned char)128;
signed char var_19 = (signed char)-86;
unsigned short var_20 = (unsigned short)8542;
unsigned char var_21 = (unsigned char)176;
signed char var_22 = (signed char)-48;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
