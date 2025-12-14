#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-3451;
unsigned int var_1 = 2288099266U;
unsigned char var_2 = (unsigned char)177;
long long int var_5 = -3584570344917819138LL;
unsigned int var_10 = 1085104467U;
unsigned short var_12 = (unsigned short)16983;
int zero = 0;
unsigned char var_14 = (unsigned char)252;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)23650;
signed char var_17 = (signed char)9;
unsigned short var_18 = (unsigned short)43084;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
