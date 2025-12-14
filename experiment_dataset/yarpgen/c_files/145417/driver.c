#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1471255183835983692LL;
signed char var_3 = (signed char)32;
unsigned int var_5 = 1441068208U;
signed char var_7 = (signed char)98;
unsigned short var_8 = (unsigned short)60753;
short var_10 = (short)-483;
signed char var_14 = (signed char)12;
unsigned char var_16 = (unsigned char)4;
long long int var_17 = -4995085377301856944LL;
signed char var_18 = (signed char)58;
int zero = 0;
int var_19 = 1039205979;
signed char var_20 = (signed char)-65;
signed char var_21 = (signed char)-105;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
