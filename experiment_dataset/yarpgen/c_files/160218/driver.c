#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned char var_3 = (unsigned char)142;
signed char var_4 = (signed char)44;
unsigned long long int var_7 = 17168019588415016515ULL;
unsigned char var_8 = (unsigned char)161;
unsigned short var_9 = (unsigned short)51909;
signed char var_11 = (signed char)86;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 2557608192U;
unsigned short var_16 = (unsigned short)26562;
signed char var_17 = (signed char)22;
unsigned short var_18 = (unsigned short)51280;
unsigned char var_19 = (unsigned char)76;
int zero = 0;
unsigned long long int var_20 = 17344409213850708846ULL;
unsigned short var_21 = (unsigned short)5312;
short var_22 = (short)-6551;
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
