#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 13496448287945098223ULL;
int var_6 = 2086182855;
signed char var_9 = (signed char)(-127 - 1);
long long int var_10 = 6695169162860091384LL;
unsigned short var_13 = (unsigned short)54986;
unsigned char var_14 = (unsigned char)76;
signed char var_15 = (signed char)116;
int zero = 0;
signed char var_19 = (signed char)-36;
short var_20 = (short)11652;
unsigned short var_21 = (unsigned short)21310;
short var_22 = (short)-24740;
unsigned char var_23 = (unsigned char)132;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
