#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)30;
unsigned int var_1 = 1345937400U;
unsigned char var_2 = (unsigned char)223;
signed char var_3 = (signed char)109;
signed char var_9 = (signed char)-99;
short var_11 = (short)6927;
unsigned char var_12 = (unsigned char)6;
int zero = 0;
short var_13 = (short)-24585;
long long int var_14 = -909218592844291635LL;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)0;
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
