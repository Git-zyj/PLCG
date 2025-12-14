#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)60;
unsigned char var_3 = (unsigned char)230;
signed char var_4 = (signed char)1;
short var_5 = (short)-18159;
long long int var_6 = -2744476063753443251LL;
signed char var_9 = (signed char)-86;
int zero = 0;
unsigned char var_10 = (unsigned char)42;
unsigned int var_11 = 2200884433U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
