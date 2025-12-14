#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)20;
_Bool var_6 = (_Bool)1;
unsigned int var_7 = 437017124U;
short var_8 = (short)23923;
signed char var_9 = (signed char)33;
int zero = 0;
unsigned char var_15 = (unsigned char)15;
signed char var_16 = (signed char)-29;
short var_17 = (short)24638;
unsigned int var_18 = 709551379U;
unsigned long long int var_19 = 17147495850395498415ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
