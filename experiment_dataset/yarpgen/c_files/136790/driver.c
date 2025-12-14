#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_1 = (unsigned short)1574;
unsigned char var_2 = (unsigned char)72;
short var_3 = (short)-3768;
unsigned int var_4 = 3144028884U;
unsigned short var_5 = (unsigned short)12211;
unsigned short var_6 = (unsigned short)1808;
unsigned short var_7 = (unsigned short)17461;
short var_8 = (short)19965;
int var_9 = 1919982464;
int zero = 0;
unsigned int var_10 = 3724715244U;
unsigned int var_11 = 1524145967U;
unsigned short var_12 = (unsigned short)26307;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
