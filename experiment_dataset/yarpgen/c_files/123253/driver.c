#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2115804940U;
unsigned short var_4 = (unsigned short)20431;
_Bool var_8 = (_Bool)1;
unsigned char var_9 = (unsigned char)141;
signed char var_10 = (signed char)10;
unsigned int var_11 = 1804332575U;
unsigned int var_15 = 2363740135U;
unsigned int var_17 = 1390920329U;
unsigned short var_18 = (unsigned short)63504;
_Bool var_19 = (_Bool)1;
int zero = 0;
unsigned short var_20 = (unsigned short)60156;
unsigned long long int var_21 = 2433949183377907032ULL;
int var_22 = -1382630514;
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
