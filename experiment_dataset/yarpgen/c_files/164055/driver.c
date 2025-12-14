#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)130;
unsigned char var_1 = (unsigned char)200;
unsigned int var_3 = 3331723597U;
_Bool var_4 = (_Bool)1;
unsigned short var_8 = (unsigned short)18293;
unsigned char var_11 = (unsigned char)132;
unsigned char var_12 = (unsigned char)125;
_Bool var_14 = (_Bool)1;
int zero = 0;
signed char var_16 = (signed char)30;
unsigned short var_17 = (unsigned short)35568;
unsigned int var_18 = 3010370203U;
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
