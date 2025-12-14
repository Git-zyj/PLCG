#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)27974;
unsigned short var_4 = (unsigned short)26239;
short var_10 = (short)-16051;
long long int var_13 = -5040534960843917464LL;
int var_16 = 2012461456;
signed char var_18 = (signed char)-65;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)24;
signed char var_22 = (signed char)-122;
unsigned long long int var_23 = 4055732597682772419ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
