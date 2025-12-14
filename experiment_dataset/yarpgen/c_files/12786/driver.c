#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned char var_3 = (unsigned char)87;
long long int var_4 = 8893147633872647268LL;
unsigned int var_5 = 988847822U;
_Bool var_8 = (_Bool)0;
signed char var_9 = (signed char)26;
unsigned int var_10 = 1130311746U;
unsigned short var_11 = (unsigned short)16610;
long long int var_13 = -5762710490294808865LL;
unsigned long long int var_14 = 8698039167057120808ULL;
signed char var_16 = (signed char)30;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 2049571147U;
unsigned char var_20 = (unsigned char)86;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
