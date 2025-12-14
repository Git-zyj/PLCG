#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-18;
short var_2 = (short)-4774;
signed char var_5 = (signed char)113;
_Bool var_6 = (_Bool)0;
unsigned int var_7 = 2123904616U;
_Bool var_8 = (_Bool)0;
unsigned int var_12 = 1223670469U;
signed char var_13 = (signed char)-55;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 3322381856U;
signed char var_16 = (signed char)-89;
signed char var_17 = (signed char)-88;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
