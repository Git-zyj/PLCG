#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)53504;
_Bool var_7 = (_Bool)0;
unsigned long long int var_12 = 11712307972054656862ULL;
long long int var_14 = 5211662421342057188LL;
long long int var_15 = 372987648902742282LL;
short var_16 = (short)10332;
short var_18 = (short)-32253;
int zero = 0;
unsigned char var_19 = (unsigned char)194;
int var_20 = 568660625;
unsigned long long int var_21 = 4353061804650601003ULL;
unsigned int var_22 = 2269916079U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
