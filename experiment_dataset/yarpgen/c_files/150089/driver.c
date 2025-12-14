#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5416286201759483680LL;
signed char var_1 = (signed char)-61;
unsigned short var_2 = (unsigned short)26342;
signed char var_3 = (signed char)24;
unsigned int var_4 = 623644827U;
unsigned char var_7 = (unsigned char)210;
unsigned long long int var_13 = 17129278469193144846ULL;
int zero = 0;
unsigned long long int var_15 = 12619506418073839146ULL;
int var_16 = 311434928;
unsigned long long int var_17 = 9592311853572049065ULL;
signed char var_18 = (signed char)92;
unsigned short var_19 = (unsigned short)56869;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
