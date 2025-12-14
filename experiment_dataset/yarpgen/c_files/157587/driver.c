#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-14320;
unsigned long long int var_3 = 12345468514390198645ULL;
int var_5 = 1450106600;
signed char var_6 = (signed char)-40;
unsigned short var_12 = (unsigned short)60329;
unsigned short var_13 = (unsigned short)31612;
int zero = 0;
unsigned short var_19 = (unsigned short)5623;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 13554572014788748680ULL;
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
