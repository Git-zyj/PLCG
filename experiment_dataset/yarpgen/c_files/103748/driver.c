#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-31956;
unsigned int var_2 = 3197035074U;
signed char var_5 = (signed char)-63;
long long int var_10 = -6705949582987716965LL;
unsigned long long int var_13 = 15219967227412373355ULL;
signed char var_15 = (signed char)37;
unsigned long long int var_16 = 1979852333044957278ULL;
int zero = 0;
short var_17 = (short)-7297;
unsigned long long int var_18 = 14757402977327399360ULL;
unsigned char var_19 = (unsigned char)167;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
