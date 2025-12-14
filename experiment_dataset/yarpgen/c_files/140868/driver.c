#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2512466095U;
_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 8953418854282380562ULL;
unsigned short var_7 = (unsigned short)20767;
long long int var_8 = 9125788125585306702LL;
short var_15 = (short)-9719;
int zero = 0;
unsigned short var_16 = (unsigned short)15594;
int var_17 = 924190503;
short var_18 = (short)7495;
unsigned char var_19 = (unsigned char)221;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
