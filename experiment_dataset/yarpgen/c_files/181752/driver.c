#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 1909733258;
short var_7 = (short)-20796;
signed char var_12 = (signed char)-122;
unsigned char var_13 = (unsigned char)154;
unsigned short var_16 = (unsigned short)62455;
signed char var_17 = (signed char)-94;
int zero = 0;
signed char var_19 = (signed char)81;
long long int var_20 = 176106755450772644LL;
_Bool var_21 = (_Bool)0;
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
