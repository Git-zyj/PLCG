#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)45622;
short var_1 = (short)15519;
long long int var_3 = 2802644526710276319LL;
unsigned int var_5 = 2851373034U;
short var_6 = (short)13551;
unsigned short var_7 = (unsigned short)50035;
unsigned char var_11 = (unsigned char)220;
int zero = 0;
unsigned short var_12 = (unsigned short)39491;
int var_13 = 697550624;
signed char var_14 = (signed char)-121;
short var_15 = (short)-24793;
void init() {
}

void checksum() {
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
