#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 17579662215600926052ULL;
_Bool var_3 = (_Bool)1;
short var_4 = (short)28729;
signed char var_5 = (signed char)34;
unsigned short var_6 = (unsigned short)12176;
unsigned int var_7 = 3030729194U;
short var_11 = (short)16885;
int zero = 0;
unsigned long long int var_12 = 18210258365729322323ULL;
unsigned int var_13 = 3043641569U;
unsigned short var_14 = (unsigned short)50280;
signed char var_15 = (signed char)-89;
unsigned char var_16 = (unsigned char)41;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
