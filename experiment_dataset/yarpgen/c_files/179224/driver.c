#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13535303798585851764ULL;
long long int var_4 = 8495831295615813326LL;
_Bool var_5 = (_Bool)0;
int var_11 = -2139193619;
unsigned int var_12 = 4272982932U;
int zero = 0;
signed char var_13 = (signed char)93;
short var_14 = (short)-31944;
unsigned char var_15 = (unsigned char)130;
unsigned char var_16 = (unsigned char)136;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
