#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_3 = (unsigned short)707;
signed char var_4 = (signed char)35;
short var_5 = (short)27508;
unsigned long long int var_6 = 2021790522793531404ULL;
unsigned char var_8 = (unsigned char)129;
int zero = 0;
signed char var_10 = (signed char)-15;
unsigned short var_11 = (unsigned short)7426;
unsigned char var_12 = (unsigned char)253;
signed char var_13 = (signed char)28;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
