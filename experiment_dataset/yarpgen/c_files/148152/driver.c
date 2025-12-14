#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1176537978;
unsigned short var_2 = (unsigned short)65526;
unsigned int var_3 = 409877597U;
unsigned char var_4 = (unsigned char)140;
unsigned int var_6 = 737704415U;
_Bool var_8 = (_Bool)1;
unsigned char var_11 = (unsigned char)81;
int var_16 = -1872989871;
int zero = 0;
unsigned short var_18 = (unsigned short)15603;
unsigned int var_19 = 1759354772U;
unsigned int var_20 = 2840015213U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
