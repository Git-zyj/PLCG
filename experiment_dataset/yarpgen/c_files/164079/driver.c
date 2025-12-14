#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1451576382U;
unsigned int var_5 = 1731734759U;
long long int var_6 = -7819812822745123006LL;
int var_7 = 707570456;
signed char var_9 = (signed char)-18;
unsigned char var_10 = (unsigned char)230;
_Bool var_11 = (_Bool)1;
unsigned long long int var_17 = 10066844926983579037ULL;
int zero = 0;
long long int var_20 = 462737894737786357LL;
unsigned long long int var_21 = 163630999036791994ULL;
unsigned short var_22 = (unsigned short)2972;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
