#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -401194888;
long long int var_2 = -7107188448823976449LL;
unsigned char var_3 = (unsigned char)179;
short var_4 = (short)-15805;
int var_5 = -1896696509;
_Bool var_6 = (_Bool)1;
long long int var_7 = 1550322076477662581LL;
long long int var_10 = -7034366689244074418LL;
unsigned int var_13 = 1953428764U;
signed char var_14 = (signed char)-64;
unsigned short var_15 = (unsigned short)18900;
unsigned int var_16 = 3435649253U;
int zero = 0;
signed char var_17 = (signed char)-18;
unsigned short var_18 = (unsigned short)40612;
unsigned char var_19 = (unsigned char)243;
signed char var_20 = (signed char)-80;
int var_21 = -1478026042;
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
