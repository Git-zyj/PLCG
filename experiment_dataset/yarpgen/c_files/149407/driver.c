#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)51967;
unsigned char var_4 = (unsigned char)224;
unsigned int var_5 = 1984109822U;
unsigned short var_6 = (unsigned short)21877;
short var_7 = (short)-20952;
signed char var_8 = (signed char)-31;
int var_10 = -1730545690;
unsigned long long int var_12 = 5981753174351003777ULL;
int var_15 = 1271915070;
int zero = 0;
unsigned char var_16 = (unsigned char)10;
int var_17 = 1589605237;
unsigned int var_18 = 1299306045U;
unsigned int var_19 = 222142863U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
