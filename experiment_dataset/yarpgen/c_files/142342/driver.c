#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)80;
unsigned int var_2 = 2783087171U;
unsigned long long int var_3 = 7384294168256735438ULL;
unsigned short var_6 = (unsigned short)23713;
unsigned char var_18 = (unsigned char)12;
unsigned long long int var_19 = 15422814057399185376ULL;
int zero = 0;
unsigned long long int var_20 = 13601835823623347585ULL;
_Bool var_21 = (_Bool)0;
unsigned char var_22 = (unsigned char)87;
void init() {
}

void checksum() {
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
