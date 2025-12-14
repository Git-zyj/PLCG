#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)78;
unsigned int var_2 = 1651409291U;
unsigned short var_3 = (unsigned short)61415;
_Bool var_4 = (_Bool)0;
short var_5 = (short)24251;
short var_6 = (short)-21601;
signed char var_8 = (signed char)13;
short var_9 = (short)-18433;
int zero = 0;
signed char var_11 = (signed char)-22;
signed char var_12 = (signed char)87;
signed char var_13 = (signed char)-9;
signed char var_14 = (signed char)56;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
