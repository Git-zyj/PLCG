#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)15706;
int var_2 = 1255152387;
unsigned int var_6 = 3228686880U;
unsigned char var_8 = (unsigned char)220;
long long int var_9 = 2441139338675082185LL;
int zero = 0;
unsigned char var_11 = (unsigned char)100;
unsigned short var_12 = (unsigned short)7050;
unsigned short var_13 = (unsigned short)65394;
unsigned short var_14 = (unsigned short)269;
_Bool var_15 = (_Bool)0;
signed char var_16 = (signed char)-22;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
