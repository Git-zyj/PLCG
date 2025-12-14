#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -54307764;
short var_5 = (short)-18754;
unsigned long long int var_6 = 17041500718794485754ULL;
signed char var_8 = (signed char)-58;
unsigned char var_10 = (unsigned char)99;
unsigned short var_12 = (unsigned short)57385;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned short var_20 = (unsigned short)56715;
signed char var_21 = (signed char)-30;
unsigned long long int var_22 = 93856674040342924ULL;
unsigned char var_23 = (unsigned char)148;
unsigned int var_24 = 1831572822U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
