#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3109420223U;
unsigned short var_5 = (unsigned short)42641;
unsigned short var_6 = (unsigned short)44443;
unsigned short var_7 = (unsigned short)65000;
signed char var_8 = (signed char)85;
int zero = 0;
unsigned int var_11 = 345305872U;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)-36;
unsigned char var_14 = (unsigned char)116;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
