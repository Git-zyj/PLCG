#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)4860;
unsigned short var_2 = (unsigned short)43726;
long long int var_4 = -5466711102907502901LL;
unsigned short var_5 = (unsigned short)15468;
unsigned short var_7 = (unsigned short)50488;
long long int var_10 = 6617488879417192561LL;
int var_13 = 402786345;
unsigned short var_14 = (unsigned short)37728;
int zero = 0;
unsigned short var_18 = (unsigned short)42806;
unsigned short var_19 = (unsigned short)22058;
short var_20 = (short)3622;
unsigned short var_21 = (unsigned short)61258;
void init() {
}

void checksum() {
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
