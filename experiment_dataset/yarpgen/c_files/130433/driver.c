#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-111;
unsigned short var_1 = (unsigned short)28840;
_Bool var_4 = (_Bool)1;
_Bool var_5 = (_Bool)1;
unsigned int var_7 = 2560871178U;
signed char var_13 = (signed char)31;
short var_14 = (short)-4754;
_Bool var_17 = (_Bool)0;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 2547187244U;
signed char var_20 = (signed char)14;
short var_21 = (short)27154;
signed char var_22 = (signed char)3;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
