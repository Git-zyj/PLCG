#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2786536372U;
unsigned short var_1 = (unsigned short)65133;
signed char var_5 = (signed char)-57;
signed char var_10 = (signed char)-88;
signed char var_12 = (signed char)23;
signed char var_15 = (signed char)62;
unsigned int var_16 = 2610965044U;
int zero = 0;
short var_18 = (short)21014;
unsigned short var_19 = (unsigned short)28343;
signed char var_20 = (signed char)1;
short var_21 = (short)-8231;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
