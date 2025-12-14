#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2366400550U;
short var_3 = (short)-20431;
signed char var_7 = (signed char)-72;
unsigned long long int var_10 = 3131530110830043473ULL;
unsigned char var_13 = (unsigned char)120;
unsigned int var_15 = 3125187695U;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned int var_20 = 1471860851U;
unsigned char var_21 = (unsigned char)24;
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
