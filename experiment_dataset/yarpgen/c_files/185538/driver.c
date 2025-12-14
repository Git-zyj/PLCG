#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned long long int var_4 = 11757501696948226188ULL;
unsigned short var_6 = (unsigned short)32239;
unsigned int var_10 = 217357584U;
short var_11 = (short)24394;
unsigned char var_12 = (unsigned char)129;
_Bool var_13 = (_Bool)1;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned char var_18 = (unsigned char)47;
unsigned long long int var_19 = 6714142838998655831ULL;
short var_20 = (short)-19752;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
