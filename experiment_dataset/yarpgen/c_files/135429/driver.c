#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)48531;
short var_2 = (short)6433;
_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)0;
_Bool var_7 = (_Bool)0;
int var_8 = 1040512347;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned short var_11 = (unsigned short)28099;
signed char var_12 = (signed char)7;
signed char var_13 = (signed char)-79;
unsigned short var_14 = (unsigned short)61213;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
