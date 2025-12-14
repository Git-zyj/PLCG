#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)12867;
unsigned long long int var_8 = 14616418328561843359ULL;
unsigned char var_12 = (unsigned char)242;
_Bool var_16 = (_Bool)1;
unsigned short var_17 = (unsigned short)57382;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)52;
long long int var_21 = -4381229810347095829LL;
short var_22 = (short)-17451;
signed char var_23 = (signed char)-14;
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
