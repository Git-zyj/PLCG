#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-114;
unsigned char var_3 = (unsigned char)36;
unsigned char var_5 = (unsigned char)120;
unsigned int var_6 = 1026149560U;
int var_11 = 896900074;
unsigned long long int var_12 = 11591752553704059722ULL;
long long int var_13 = -3385011817094398549LL;
unsigned char var_14 = (unsigned char)123;
int zero = 0;
short var_16 = (short)-9724;
unsigned char var_17 = (unsigned char)82;
unsigned char var_18 = (unsigned char)129;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
