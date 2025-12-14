#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)250;
unsigned int var_5 = 3872234603U;
short var_6 = (short)27634;
long long int var_7 = 9212422530003749066LL;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)-38;
int zero = 0;
unsigned char var_13 = (unsigned char)44;
short var_14 = (short)24649;
signed char var_15 = (signed char)100;
signed char var_16 = (signed char)-36;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
