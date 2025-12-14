#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_1 = 4159859070734924883ULL;
int var_2 = -1791894022;
signed char var_3 = (signed char)-115;
signed char var_4 = (signed char)-61;
unsigned int var_5 = 4092702582U;
signed char var_6 = (signed char)-15;
unsigned int var_8 = 1328932681U;
_Bool var_9 = (_Bool)1;
int zero = 0;
signed char var_11 = (signed char)-57;
short var_12 = (short)22866;
int var_13 = 478742654;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
