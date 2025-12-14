#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)13;
unsigned short var_2 = (unsigned short)47139;
unsigned char var_4 = (unsigned char)57;
unsigned long long int var_6 = 12822653082443066996ULL;
signed char var_8 = (signed char)-71;
short var_9 = (short)1776;
short var_10 = (short)-15262;
_Bool var_12 = (_Bool)1;
int var_13 = -846789049;
short var_14 = (short)32123;
unsigned short var_16 = (unsigned short)16832;
int zero = 0;
short var_17 = (short)-15504;
short var_18 = (short)-26634;
short var_19 = (short)-14276;
short var_20 = (short)-164;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
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
