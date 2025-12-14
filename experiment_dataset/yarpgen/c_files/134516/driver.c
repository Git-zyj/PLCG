#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2774943404U;
signed char var_2 = (signed char)111;
unsigned short var_4 = (unsigned short)29132;
signed char var_5 = (signed char)74;
unsigned char var_11 = (unsigned char)234;
long long int var_14 = -7287675916984556335LL;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)178;
signed char var_17 = (signed char)9;
unsigned short var_18 = (unsigned short)31615;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
