#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2425898873U;
long long int var_4 = 7864856427226725809LL;
signed char var_6 = (signed char)62;
long long int var_10 = 4704053970220629427LL;
_Bool var_14 = (_Bool)1;
long long int var_15 = -3718287348671083487LL;
_Bool var_16 = (_Bool)0;
unsigned long long int var_19 = 3110766902647848345ULL;
int zero = 0;
unsigned long long int var_20 = 12388136759970608848ULL;
unsigned char var_21 = (unsigned char)239;
unsigned short var_22 = (unsigned short)23160;
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
