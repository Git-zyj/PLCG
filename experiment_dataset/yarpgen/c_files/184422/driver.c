#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)24;
signed char var_1 = (signed char)-95;
unsigned short var_5 = (unsigned short)50256;
unsigned short var_7 = (unsigned short)51979;
_Bool var_8 = (_Bool)1;
signed char var_10 = (signed char)81;
int zero = 0;
unsigned int var_11 = 4075073905U;
short var_12 = (short)32048;
unsigned long long int var_13 = 16225575304620311341ULL;
void init() {
}

void checksum() {
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
