#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-6350;
signed char var_1 = (signed char)-4;
short var_2 = (short)-30537;
unsigned long long int var_4 = 12892636031128318726ULL;
unsigned int var_5 = 104952632U;
unsigned char var_6 = (unsigned char)238;
unsigned long long int var_7 = 10460846007633293424ULL;
unsigned long long int var_8 = 14639270393907493869ULL;
unsigned short var_9 = (unsigned short)61755;
int zero = 0;
unsigned char var_10 = (unsigned char)59;
unsigned long long int var_11 = 1381010241593383533ULL;
unsigned long long int var_12 = 13573425103403644187ULL;
unsigned short var_13 = (unsigned short)59474;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
