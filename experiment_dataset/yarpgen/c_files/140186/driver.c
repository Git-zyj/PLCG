#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)197;
unsigned char var_1 = (unsigned char)9;
_Bool var_3 = (_Bool)1;
unsigned char var_4 = (unsigned char)251;
short var_5 = (short)-1230;
long long int var_6 = 6794682859139423256LL;
_Bool var_7 = (_Bool)0;
_Bool var_9 = (_Bool)0;
int var_12 = -413457072;
int zero = 0;
unsigned long long int var_15 = 4778358399497273700ULL;
unsigned long long int var_16 = 12912769245302934960ULL;
unsigned int var_17 = 2426120423U;
void init() {
}

void checksum() {
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
