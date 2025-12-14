#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-26848;
_Bool var_2 = (_Bool)1;
unsigned short var_6 = (unsigned short)63822;
unsigned long long int var_7 = 3812443002787451619ULL;
signed char var_8 = (signed char)3;
unsigned int var_13 = 88118233U;
signed char var_14 = (signed char)-3;
unsigned char var_16 = (unsigned char)32;
int zero = 0;
_Bool var_18 = (_Bool)0;
int var_19 = -487494943;
void init() {
}

void checksum() {
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
