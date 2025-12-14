#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 14189115824419315708ULL;
short var_5 = (short)32232;
unsigned char var_7 = (unsigned char)172;
int var_8 = 198898453;
signed char var_10 = (signed char)35;
unsigned int var_11 = 2573094715U;
unsigned short var_14 = (unsigned short)51550;
_Bool var_16 = (_Bool)0;
unsigned short var_18 = (unsigned short)11221;
int zero = 0;
unsigned short var_19 = (unsigned short)64159;
unsigned char var_20 = (unsigned char)190;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
