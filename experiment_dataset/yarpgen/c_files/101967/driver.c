#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)21409;
long long int var_1 = 2207099886375264071LL;
short var_2 = (short)-30005;
short var_3 = (short)-27772;
int var_4 = -782843220;
unsigned int var_5 = 355236970U;
signed char var_6 = (signed char)-53;
long long int var_7 = 4347616167042624715LL;
unsigned short var_8 = (unsigned short)30980;
unsigned short var_9 = (unsigned short)49012;
int var_10 = 124553286;
signed char var_11 = (signed char)-53;
long long int var_12 = -5978045203273756424LL;
int zero = 0;
signed char var_13 = (signed char)12;
_Bool var_14 = (_Bool)0;
unsigned char var_15 = (unsigned char)149;
unsigned short var_16 = (unsigned short)50623;
unsigned int var_17 = 2843409476U;
int var_18 = 1542389820;
unsigned short var_19 = (unsigned short)31520;
unsigned long long int var_20 = 10100845872960172531ULL;
unsigned short var_21 = (unsigned short)24764;
long long int var_22 = -8916196553289049665LL;
_Bool var_23 = (_Bool)1;
_Bool var_24 = (_Bool)0;
long long int var_25 = -88340119853360424LL;
signed char var_26 = (signed char)42;
unsigned short var_27 = (unsigned short)838;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
