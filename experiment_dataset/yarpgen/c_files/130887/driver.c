#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_7 = 10944874530803459568ULL;
unsigned int var_8 = 2757937473U;
_Bool var_9 = (_Bool)0;
short var_11 = (short)8760;
_Bool var_13 = (_Bool)0;
unsigned short var_15 = (unsigned short)43598;
unsigned short var_16 = (unsigned short)11658;
unsigned short var_17 = (unsigned short)56997;
int zero = 0;
unsigned char var_18 = (unsigned char)245;
unsigned short var_19 = (unsigned short)40265;
long long int var_20 = 5820209002290056844LL;
unsigned short var_21 = (unsigned short)47976;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
