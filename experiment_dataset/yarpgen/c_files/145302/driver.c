#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)16292;
unsigned short var_2 = (unsigned short)42931;
signed char var_3 = (signed char)-118;
unsigned long long int var_4 = 12018599080014920437ULL;
_Bool var_10 = (_Bool)1;
_Bool var_11 = (_Bool)1;
_Bool var_12 = (_Bool)0;
unsigned int var_15 = 4208916968U;
int zero = 0;
unsigned long long int var_16 = 1904271988937228179ULL;
unsigned char var_17 = (unsigned char)24;
short var_18 = (short)28010;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
