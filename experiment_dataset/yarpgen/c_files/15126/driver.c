#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7884401632473659639ULL;
short var_2 = (short)22134;
unsigned short var_3 = (unsigned short)62601;
_Bool var_4 = (_Bool)0;
short var_6 = (short)21368;
_Bool var_7 = (_Bool)1;
unsigned char var_9 = (unsigned char)204;
signed char var_11 = (signed char)-22;
unsigned char var_12 = (unsigned char)211;
int var_13 = -1739462500;
int zero = 0;
signed char var_14 = (signed char)31;
int var_15 = 2022661038;
short var_16 = (short)-8034;
int var_17 = -1692752219;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
