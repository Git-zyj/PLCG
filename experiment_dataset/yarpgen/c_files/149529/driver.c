#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5904688677231154309LL;
unsigned char var_2 = (unsigned char)69;
_Bool var_3 = (_Bool)1;
unsigned long long int var_4 = 14446439316496571839ULL;
long long int var_6 = 2870870093812946537LL;
unsigned int var_8 = 387083069U;
unsigned long long int var_10 = 6667491636599147909ULL;
unsigned char var_11 = (unsigned char)132;
_Bool var_14 = (_Bool)1;
int zero = 0;
int var_15 = -1978218026;
int var_16 = 1854652816;
short var_17 = (short)20496;
unsigned int var_18 = 2424017953U;
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
