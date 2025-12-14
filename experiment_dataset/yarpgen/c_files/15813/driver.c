#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)111;
unsigned int var_1 = 3365209387U;
_Bool var_2 = (_Bool)1;
short var_3 = (short)28699;
signed char var_4 = (signed char)99;
int var_5 = 651704836;
short var_7 = (short)-25090;
signed char var_8 = (signed char)50;
unsigned int var_9 = 949475846U;
int var_11 = 623842416;
unsigned int var_12 = 2604053308U;
signed char var_13 = (signed char)-121;
unsigned int var_14 = 2974871505U;
unsigned int var_15 = 2001933321U;
unsigned int var_16 = 2526957735U;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned int var_20 = 1614947420U;
short var_21 = (short)14607;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
