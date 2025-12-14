#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)28638;
int var_1 = -2081198025;
long long int var_2 = 7328900958093120271LL;
short var_4 = (short)13960;
long long int var_5 = 293412626930088549LL;
unsigned int var_6 = 4180934304U;
unsigned int var_8 = 2582772888U;
int var_10 = 1689041459;
unsigned char var_11 = (unsigned char)104;
signed char var_12 = (signed char)-19;
int zero = 0;
long long int var_13 = -3181408827232290225LL;
_Bool var_14 = (_Bool)0;
int var_15 = 1458078272;
unsigned short var_16 = (unsigned short)43914;
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
