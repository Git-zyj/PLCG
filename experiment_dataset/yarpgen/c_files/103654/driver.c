#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3837888295937011187LL;
_Bool var_2 = (_Bool)0;
unsigned short var_3 = (unsigned short)36853;
_Bool var_4 = (_Bool)1;
signed char var_6 = (signed char)69;
short var_8 = (short)-14904;
int zero = 0;
int var_11 = 599204305;
short var_12 = (short)16128;
unsigned short var_13 = (unsigned short)42566;
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
