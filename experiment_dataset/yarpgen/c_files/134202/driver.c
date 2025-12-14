#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6125835060884093853LL;
_Bool var_4 = (_Bool)1;
unsigned short var_5 = (unsigned short)37991;
unsigned int var_7 = 3481417103U;
unsigned short var_8 = (unsigned short)29921;
int var_10 = 1070253959;
signed char var_11 = (signed char)-94;
int zero = 0;
signed char var_12 = (signed char)108;
unsigned short var_13 = (unsigned short)49718;
unsigned short var_14 = (unsigned short)64950;
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
