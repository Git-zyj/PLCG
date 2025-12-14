#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)29881;
unsigned char var_1 = (unsigned char)249;
unsigned int var_4 = 2326491759U;
signed char var_5 = (signed char)-71;
short var_6 = (short)27738;
unsigned short var_7 = (unsigned short)45244;
long long int var_8 = 7985000616226627450LL;
short var_11 = (short)-24205;
long long int var_13 = -9057825332192737687LL;
int var_15 = 883240225;
int zero = 0;
unsigned short var_20 = (unsigned short)36793;
unsigned char var_21 = (unsigned char)165;
unsigned long long int var_22 = 1479063441688335991ULL;
unsigned long long int var_23 = 3210248877802671621ULL;
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
