#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)22120;
unsigned int var_3 = 997362701U;
_Bool var_4 = (_Bool)1;
unsigned char var_5 = (unsigned char)164;
unsigned short var_7 = (unsigned short)12778;
unsigned char var_11 = (unsigned char)198;
unsigned short var_13 = (unsigned short)56641;
int zero = 0;
unsigned char var_15 = (unsigned char)111;
unsigned short var_16 = (unsigned short)37472;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
