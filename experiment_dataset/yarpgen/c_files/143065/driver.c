#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15776326916872495501ULL;
signed char var_2 = (signed char)65;
long long int var_3 = 2893689448663588169LL;
unsigned long long int var_4 = 4335417488975943293ULL;
unsigned int var_6 = 3477467409U;
unsigned char var_7 = (unsigned char)212;
short var_8 = (short)28278;
int zero = 0;
_Bool var_10 = (_Bool)0;
int var_11 = 1895689279;
int var_12 = 542689586;
unsigned short var_13 = (unsigned short)24010;
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
