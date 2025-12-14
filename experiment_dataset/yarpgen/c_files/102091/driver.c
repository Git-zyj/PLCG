#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-8471;
int var_3 = 290445949;
int var_4 = 1589306130;
unsigned int var_5 = 1641046726U;
signed char var_6 = (signed char)-78;
short var_8 = (short)32397;
short var_13 = (short)-14690;
signed char var_14 = (signed char)34;
int zero = 0;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)5;
signed char var_17 = (signed char)-97;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
