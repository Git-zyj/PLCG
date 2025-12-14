#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13520759277795924036ULL;
int var_2 = -1790831619;
unsigned short var_3 = (unsigned short)34207;
unsigned long long int var_4 = 11950384343990094874ULL;
short var_6 = (short)-7343;
_Bool var_7 = (_Bool)1;
int var_8 = 929845606;
signed char var_11 = (signed char)31;
int var_13 = 345741062;
short var_14 = (short)31724;
signed char var_15 = (signed char)54;
signed char var_16 = (signed char)-25;
int var_17 = -1561208830;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 2827317552U;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
