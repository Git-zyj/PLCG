#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)58;
short var_1 = (short)30854;
_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)0;
long long int var_6 = 2783789451701265961LL;
_Bool var_7 = (_Bool)1;
unsigned char var_8 = (unsigned char)31;
int var_9 = 548317270;
int zero = 0;
unsigned int var_10 = 783542630U;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)54;
signed char var_13 = (signed char)-119;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
