#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)2898;
long long int var_1 = -5669089107430909756LL;
int var_2 = 67030722;
_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 13145539988329187668ULL;
short var_5 = (short)3235;
short var_6 = (short)-30700;
unsigned short var_7 = (unsigned short)2376;
int var_8 = 450151417;
int zero = 0;
short var_11 = (short)-47;
long long int var_12 = -8912982344776668656LL;
signed char var_13 = (signed char)119;
unsigned short var_14 = (unsigned short)63045;
unsigned long long int var_15 = 14066078612830604453ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
