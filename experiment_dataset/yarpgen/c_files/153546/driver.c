#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)60477;
unsigned char var_1 = (unsigned char)228;
signed char var_3 = (signed char)47;
unsigned char var_6 = (unsigned char)85;
signed char var_7 = (signed char)81;
signed char var_9 = (signed char)-24;
_Bool var_12 = (_Bool)0;
long long int var_13 = 2681564711221153219LL;
unsigned int var_14 = 3792024679U;
int zero = 0;
int var_15 = -455362246;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)33;
unsigned int var_18 = 2008085385U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
