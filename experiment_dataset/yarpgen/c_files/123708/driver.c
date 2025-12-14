#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1894941424U;
unsigned short var_1 = (unsigned short)3531;
signed char var_2 = (signed char)-31;
unsigned int var_5 = 1421546856U;
long long int var_6 = 4950646702098147646LL;
long long int var_7 = 3568094599865042267LL;
short var_8 = (short)20680;
unsigned char var_10 = (unsigned char)21;
unsigned long long int var_11 = 11518186116067333043ULL;
int zero = 0;
long long int var_12 = -2245425454036802501LL;
int var_13 = -275877979;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
