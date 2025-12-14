#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)46432;
unsigned long long int var_2 = 9913616948560244908ULL;
unsigned int var_3 = 504686810U;
unsigned long long int var_5 = 13459225461134039660ULL;
unsigned int var_6 = 1787258944U;
unsigned short var_8 = (unsigned short)25642;
signed char var_10 = (signed char)27;
unsigned int var_11 = 3986759031U;
int zero = 0;
short var_12 = (short)-21293;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
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
