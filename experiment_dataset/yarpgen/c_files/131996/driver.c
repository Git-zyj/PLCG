#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4794571732502178177ULL;
long long int var_1 = 3420654618976756902LL;
int var_2 = 260452396;
short var_4 = (short)-24914;
long long int var_5 = -541973352263653037LL;
unsigned int var_6 = 1652195234U;
_Bool var_7 = (_Bool)0;
unsigned short var_12 = (unsigned short)53454;
unsigned short var_13 = (unsigned short)37881;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)170;
unsigned short var_22 = (unsigned short)8848;
int var_23 = -1130876131;
unsigned int var_24 = 2950726013U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
