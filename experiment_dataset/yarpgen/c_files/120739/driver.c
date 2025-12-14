#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)17641;
unsigned int var_3 = 2860972465U;
signed char var_4 = (signed char)126;
_Bool var_6 = (_Bool)1;
short var_8 = (short)-19650;
short var_10 = (short)29744;
int var_12 = 1247895836;
int zero = 0;
unsigned short var_13 = (unsigned short)32549;
signed char var_14 = (signed char)-120;
void init() {
}

void checksum() {
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
