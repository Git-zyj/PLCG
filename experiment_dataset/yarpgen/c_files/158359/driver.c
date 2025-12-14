#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)61741;
signed char var_1 = (signed char)113;
short var_2 = (short)21012;
int var_3 = -1664917147;
short var_4 = (short)-20539;
unsigned int var_5 = 3550844285U;
_Bool var_6 = (_Bool)0;
unsigned short var_7 = (unsigned short)10752;
unsigned short var_9 = (unsigned short)31906;
unsigned char var_11 = (unsigned char)35;
unsigned short var_12 = (unsigned short)49000;
short var_13 = (short)3785;
int zero = 0;
unsigned short var_14 = (unsigned short)8067;
long long int var_15 = 6146404924804190070LL;
unsigned short var_16 = (unsigned short)60554;
unsigned char var_17 = (unsigned char)41;
short var_18 = (short)-29407;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
