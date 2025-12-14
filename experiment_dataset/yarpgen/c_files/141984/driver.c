#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-79;
unsigned int var_5 = 4171586443U;
unsigned char var_7 = (unsigned char)222;
long long int var_8 = 8516380667944170536LL;
int var_10 = 1592622931;
int var_11 = 1242875409;
short var_13 = (short)-30202;
short var_16 = (short)19766;
unsigned int var_17 = 2223785616U;
unsigned char var_19 = (unsigned char)204;
int zero = 0;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)1;
unsigned int var_22 = 1865473592U;
long long int var_23 = 3872493266458461087LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
