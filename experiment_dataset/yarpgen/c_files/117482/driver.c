#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 4307946257089140206LL;
signed char var_7 = (signed char)52;
unsigned int var_13 = 3501568231U;
int zero = 0;
unsigned long long int var_19 = 4424658146630022368ULL;
signed char var_20 = (signed char)-100;
unsigned short var_21 = (unsigned short)24014;
short var_22 = (short)11692;
unsigned char var_23 = (unsigned char)228;
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
