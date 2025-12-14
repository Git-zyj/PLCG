#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-91;
_Bool var_7 = (_Bool)0;
unsigned int var_10 = 3287839452U;
signed char var_11 = (signed char)107;
_Bool var_13 = (_Bool)0;
signed char var_15 = (signed char)-8;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)49927;
unsigned short var_21 = (unsigned short)29935;
unsigned short var_22 = (unsigned short)17925;
void init() {
}

void checksum() {
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
