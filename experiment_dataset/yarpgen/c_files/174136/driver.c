#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2066764505;
unsigned int var_1 = 3982173941U;
unsigned char var_4 = (unsigned char)212;
int var_10 = 1962605556;
long long int var_11 = 956137001550029238LL;
unsigned char var_12 = (unsigned char)117;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)71;
int zero = 0;
signed char var_20 = (signed char)-86;
short var_21 = (short)-32114;
long long int var_22 = -527204961554315044LL;
void init() {
}

void checksum() {
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
