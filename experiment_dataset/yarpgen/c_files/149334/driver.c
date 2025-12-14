#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-16414;
signed char var_1 = (signed char)94;
unsigned int var_3 = 3107834801U;
short var_4 = (short)-10736;
_Bool var_5 = (_Bool)1;
signed char var_6 = (signed char)2;
unsigned int var_7 = 2025627624U;
unsigned short var_8 = (unsigned short)9999;
unsigned char var_10 = (unsigned char)240;
int zero = 0;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)-71;
unsigned long long int var_15 = 17482168524672314124ULL;
signed char var_16 = (signed char)43;
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
