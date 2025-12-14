#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)131;
int var_2 = 1195422007;
signed char var_3 = (signed char)-3;
short var_4 = (short)26840;
signed char var_7 = (signed char)33;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 1450089603U;
unsigned long long int var_13 = 5379351714482100828ULL;
int zero = 0;
unsigned long long int var_15 = 2015781489051977698ULL;
_Bool var_16 = (_Bool)1;
_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)0;
unsigned char var_19 = (unsigned char)5;
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
