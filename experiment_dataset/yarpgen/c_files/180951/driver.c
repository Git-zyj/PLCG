#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-75;
unsigned int var_2 = 2986808511U;
unsigned long long int var_4 = 4080756848920617208ULL;
unsigned int var_7 = 3904258144U;
long long int var_8 = 6135723028194796412LL;
_Bool var_10 = (_Bool)0;
int var_11 = -769227717;
unsigned int var_12 = 1116926406U;
_Bool var_13 = (_Bool)0;
short var_14 = (short)2369;
int var_17 = 790339768;
int zero = 0;
unsigned char var_18 = (unsigned char)206;
unsigned short var_19 = (unsigned short)6133;
void init() {
}

void checksum() {
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
