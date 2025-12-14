#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)55466;
int var_1 = 1111767121;
long long int var_2 = 8914340754760744203LL;
_Bool var_5 = (_Bool)1;
int var_6 = 1087369989;
_Bool var_7 = (_Bool)0;
_Bool var_8 = (_Bool)1;
unsigned int var_11 = 1950981685U;
unsigned char var_12 = (unsigned char)234;
int var_15 = 389543927;
unsigned int var_18 = 54437763U;
int zero = 0;
short var_19 = (short)-2279;
int var_20 = 1158969353;
int var_21 = -393945401;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
