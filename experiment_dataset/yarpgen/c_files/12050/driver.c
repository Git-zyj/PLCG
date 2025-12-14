#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2335247271U;
unsigned long long int var_3 = 6669144415743966448ULL;
short var_5 = (short)-18423;
_Bool var_9 = (_Bool)0;
unsigned char var_11 = (unsigned char)223;
unsigned short var_14 = (unsigned short)8956;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)126;
int zero = 0;
unsigned int var_20 = 442348633U;
unsigned long long int var_21 = 8719732104752089367ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
