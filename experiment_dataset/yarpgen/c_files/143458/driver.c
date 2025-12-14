#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 104336465;
int var_5 = 1459923058;
unsigned int var_7 = 923769288U;
short var_8 = (short)5382;
unsigned int var_10 = 1342579547U;
_Bool var_11 = (_Bool)0;
unsigned short var_12 = (unsigned short)42292;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)1;
int var_15 = 795697031;
int zero = 0;
long long int var_17 = -6412344650554254653LL;
unsigned long long int var_18 = 5383122778807219566ULL;
unsigned char var_19 = (unsigned char)23;
void init() {
}

void checksum() {
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
