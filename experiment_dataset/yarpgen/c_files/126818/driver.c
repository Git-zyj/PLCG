#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4270509117U;
unsigned short var_3 = (unsigned short)41658;
long long int var_4 = -7975750406406976102LL;
int var_6 = -761644725;
unsigned int var_9 = 1778732388U;
long long int var_10 = 6319672663189441864LL;
signed char var_11 = (signed char)73;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned char var_14 = (unsigned char)178;
short var_15 = (short)22844;
unsigned long long int var_16 = 12992137820391203331ULL;
unsigned short var_17 = (unsigned short)49197;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
