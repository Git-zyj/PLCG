#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-1718;
signed char var_1 = (signed char)52;
int var_2 = 1481120690;
signed char var_4 = (signed char)12;
int var_5 = -462505515;
unsigned long long int var_7 = 13109176455046847388ULL;
unsigned char var_8 = (unsigned char)11;
unsigned char var_11 = (unsigned char)43;
int zero = 0;
_Bool var_20 = (_Bool)1;
short var_21 = (short)-32623;
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
