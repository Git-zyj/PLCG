#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)27432;
signed char var_1 = (signed char)70;
unsigned char var_2 = (unsigned char)2;
unsigned char var_5 = (unsigned char)41;
_Bool var_8 = (_Bool)1;
short var_9 = (short)24428;
unsigned short var_10 = (unsigned short)7150;
unsigned char var_11 = (unsigned char)84;
_Bool var_12 = (_Bool)1;
short var_13 = (short)26856;
int zero = 0;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)33140;
_Bool var_18 = (_Bool)1;
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
