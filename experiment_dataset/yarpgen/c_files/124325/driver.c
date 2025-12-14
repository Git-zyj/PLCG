#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 4294273333U;
unsigned char var_4 = (unsigned char)99;
unsigned long long int var_5 = 17124178519579751903ULL;
short var_8 = (short)667;
unsigned int var_10 = 1297211520U;
_Bool var_11 = (_Bool)1;
signed char var_14 = (signed char)-43;
signed char var_15 = (signed char)115;
short var_16 = (short)-17671;
int zero = 0;
_Bool var_17 = (_Bool)1;
short var_18 = (short)6515;
void init() {
}

void checksum() {
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
