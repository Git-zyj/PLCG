#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)187;
unsigned long long int var_1 = 2857281502362099278ULL;
unsigned short var_3 = (unsigned short)13834;
signed char var_4 = (signed char)-41;
short var_5 = (short)-12367;
int var_6 = -510507176;
unsigned long long int var_7 = 13237827315629539853ULL;
int var_8 = -1672578055;
signed char var_11 = (signed char)-56;
unsigned char var_12 = (unsigned char)75;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned char var_15 = (unsigned char)30;
unsigned int var_16 = 616465224U;
unsigned long long int var_17 = 16687609585511550065ULL;
unsigned long long int var_18 = 16633957136535977453ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
