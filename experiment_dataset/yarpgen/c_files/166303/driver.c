#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1374453549;
unsigned short var_1 = (unsigned short)62433;
short var_2 = (short)12869;
unsigned short var_3 = (unsigned short)40551;
unsigned char var_5 = (unsigned char)13;
unsigned char var_6 = (unsigned char)136;
unsigned char var_7 = (unsigned char)234;
unsigned long long int var_8 = 15197598695883328818ULL;
long long int var_9 = 1960816573203865271LL;
unsigned char var_11 = (unsigned char)100;
signed char var_12 = (signed char)107;
int zero = 0;
short var_14 = (short)6849;
unsigned int var_15 = 2705158004U;
short var_16 = (short)-20077;
long long int var_17 = 529700665257937741LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
