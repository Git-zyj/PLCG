#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)43318;
unsigned short var_1 = (unsigned short)13727;
long long int var_2 = -3853225265748535448LL;
long long int var_3 = 625951450824132461LL;
long long int var_4 = 809475488246844835LL;
signed char var_7 = (signed char)-60;
long long int var_8 = -7792302378381174322LL;
long long int var_10 = 7688394674646175338LL;
unsigned int var_14 = 3948113884U;
unsigned int var_16 = 1304456355U;
int zero = 0;
unsigned int var_17 = 4017173249U;
long long int var_18 = -2393580998021534057LL;
signed char var_19 = (signed char)-69;
long long int var_20 = 2806394799459783805LL;
int var_21 = -395180209;
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
