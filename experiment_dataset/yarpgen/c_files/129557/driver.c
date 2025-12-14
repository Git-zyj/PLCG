#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-3925;
unsigned char var_2 = (unsigned char)158;
long long int var_4 = 5638177944801213298LL;
unsigned char var_5 = (unsigned char)172;
short var_11 = (short)-5011;
unsigned char var_16 = (unsigned char)31;
unsigned int var_19 = 2971331635U;
int zero = 0;
int var_20 = 717218747;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
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
