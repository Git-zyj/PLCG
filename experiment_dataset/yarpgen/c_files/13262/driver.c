#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_1 = (short)-16449;
signed char var_2 = (signed char)67;
unsigned short var_3 = (unsigned short)6588;
unsigned int var_4 = 2772976674U;
unsigned short var_5 = (unsigned short)55285;
unsigned char var_6 = (unsigned char)182;
unsigned long long int var_7 = 10164081761363602820ULL;
unsigned int var_8 = 1229031284U;
int var_9 = 1104159493;
int zero = 0;
unsigned char var_10 = (unsigned char)90;
short var_11 = (short)-4971;
_Bool var_12 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
