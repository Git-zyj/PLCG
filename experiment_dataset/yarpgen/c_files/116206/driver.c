#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)142;
unsigned short var_7 = (unsigned short)37073;
unsigned char var_8 = (unsigned char)111;
unsigned short var_12 = (unsigned short)54624;
unsigned int var_13 = 1658685591U;
unsigned char var_14 = (unsigned char)157;
unsigned char var_15 = (unsigned char)215;
_Bool var_16 = (_Bool)0;
int zero = 0;
long long int var_17 = -4046434070665432058LL;
unsigned long long int var_18 = 12187509015366889560ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
