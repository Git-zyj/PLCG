#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4309652917548521485LL;
unsigned short var_3 = (unsigned short)46323;
unsigned char var_5 = (unsigned char)243;
signed char var_6 = (signed char)-26;
_Bool var_7 = (_Bool)0;
signed char var_9 = (signed char)-31;
int zero = 0;
_Bool var_10 = (_Bool)0;
short var_11 = (short)-30914;
int var_12 = -146584053;
unsigned int var_13 = 866457853U;
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
