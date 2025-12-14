#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -187590454;
unsigned char var_2 = (unsigned char)135;
unsigned short var_3 = (unsigned short)51588;
unsigned char var_7 = (unsigned char)18;
unsigned short var_8 = (unsigned short)17836;
_Bool var_9 = (_Bool)1;
unsigned short var_10 = (unsigned short)22432;
unsigned short var_11 = (unsigned short)45005;
signed char var_12 = (signed char)-115;
int zero = 0;
unsigned short var_16 = (unsigned short)53804;
unsigned int var_17 = 1405110665U;
unsigned char var_18 = (unsigned char)238;
void init() {
}

void checksum() {
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
