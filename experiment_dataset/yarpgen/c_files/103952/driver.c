#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 441893996U;
signed char var_3 = (signed char)-80;
int var_4 = -152504220;
short var_8 = (short)20947;
_Bool var_10 = (_Bool)1;
short var_12 = (short)30244;
unsigned char var_14 = (unsigned char)42;
long long int var_16 = -4463835842694422036LL;
int zero = 0;
unsigned int var_19 = 3399538064U;
signed char var_20 = (signed char)90;
void init() {
}

void checksum() {
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
