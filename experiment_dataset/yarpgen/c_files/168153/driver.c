#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 903606500253152091ULL;
signed char var_5 = (signed char)49;
signed char var_10 = (signed char)-13;
unsigned char var_12 = (unsigned char)165;
unsigned char var_14 = (unsigned char)247;
unsigned char var_18 = (unsigned char)243;
short var_19 = (short)10494;
int zero = 0;
short var_20 = (short)-20884;
unsigned char var_21 = (unsigned char)233;
signed char var_22 = (signed char)63;
unsigned char var_23 = (unsigned char)221;
_Bool var_24 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
