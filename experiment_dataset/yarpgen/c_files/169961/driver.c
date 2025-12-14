#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-96;
unsigned char var_2 = (unsigned char)71;
unsigned short var_3 = (unsigned short)23205;
unsigned char var_5 = (unsigned char)211;
_Bool var_8 = (_Bool)1;
_Bool var_10 = (_Bool)1;
unsigned long long int var_11 = 10940298173447636456ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)18;
unsigned char var_14 = (unsigned char)92;
unsigned short var_15 = (unsigned short)34796;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
