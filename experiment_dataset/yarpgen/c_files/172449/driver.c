#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)33378;
unsigned int var_2 = 1438733888U;
_Bool var_3 = (_Bool)1;
_Bool var_5 = (_Bool)1;
unsigned short var_11 = (unsigned short)15940;
short var_12 = (short)-2371;
int zero = 0;
unsigned char var_17 = (unsigned char)234;
short var_18 = (short)-1976;
short var_19 = (short)-23040;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
