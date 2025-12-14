#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-37;
short var_1 = (short)7620;
_Bool var_2 = (_Bool)1;
unsigned long long int var_4 = 6990026147174888413ULL;
long long int var_5 = 5783259108886266366LL;
unsigned int var_7 = 3434347516U;
unsigned char var_8 = (unsigned char)205;
unsigned long long int var_9 = 2073249466425663661ULL;
int zero = 0;
long long int var_10 = -5491365079800168100LL;
unsigned short var_11 = (unsigned short)10246;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
