#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)3;
unsigned int var_2 = 3855720464U;
unsigned short var_3 = (unsigned short)37949;
unsigned int var_5 = 2639055205U;
_Bool var_6 = (_Bool)1;
long long int var_8 = -6132848995608444840LL;
short var_10 = (short)-7602;
signed char var_11 = (signed char)113;
unsigned char var_12 = (unsigned char)169;
unsigned short var_14 = (unsigned short)47672;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned long long int var_16 = 17526059816781793776ULL;
signed char var_17 = (signed char)98;
unsigned long long int var_18 = 15377692264229547436ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
