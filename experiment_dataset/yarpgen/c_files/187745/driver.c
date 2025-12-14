#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2596805433U;
signed char var_3 = (signed char)97;
unsigned short var_4 = (unsigned short)2874;
_Bool var_6 = (_Bool)0;
unsigned char var_15 = (unsigned char)178;
short var_16 = (short)-15573;
long long int var_18 = 1584574637732719160LL;
int zero = 0;
unsigned int var_20 = 2252465744U;
_Bool var_21 = (_Bool)0;
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
