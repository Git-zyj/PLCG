#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2532686638U;
long long int var_2 = -2657654103259956331LL;
unsigned int var_4 = 3416810385U;
_Bool var_5 = (_Bool)0;
unsigned int var_8 = 1784113718U;
short var_11 = (short)-20336;
signed char var_14 = (signed char)30;
int zero = 0;
unsigned short var_19 = (unsigned short)17387;
int var_20 = 1546421692;
int var_21 = 1434437768;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
