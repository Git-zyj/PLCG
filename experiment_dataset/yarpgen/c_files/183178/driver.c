#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2703774529U;
unsigned int var_4 = 1035691596U;
unsigned int var_6 = 894832691U;
long long int var_10 = -8967522825038891158LL;
signed char var_12 = (signed char)-98;
unsigned short var_13 = (unsigned short)15516;
unsigned int var_16 = 3439884275U;
int zero = 0;
int var_20 = 1839950992;
signed char var_21 = (signed char)-116;
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
