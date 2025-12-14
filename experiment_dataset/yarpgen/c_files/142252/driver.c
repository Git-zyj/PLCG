#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
long long int var_2 = -707235724475709237LL;
signed char var_3 = (signed char)-81;
signed char var_4 = (signed char)6;
short var_5 = (short)-22079;
unsigned char var_6 = (unsigned char)229;
short var_7 = (short)18954;
short var_10 = (short)19977;
unsigned int var_11 = 1593953056U;
unsigned int var_13 = 2103691871U;
int zero = 0;
unsigned short var_15 = (unsigned short)5443;
short var_16 = (short)1315;
short var_17 = (short)-7275;
unsigned long long int var_18 = 18238965708602111485ULL;
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
