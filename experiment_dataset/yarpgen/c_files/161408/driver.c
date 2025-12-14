#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-3859;
unsigned int var_2 = 858624635U;
_Bool var_3 = (_Bool)0;
unsigned char var_6 = (unsigned char)213;
unsigned short var_9 = (unsigned short)42872;
unsigned char var_10 = (unsigned char)22;
_Bool var_11 = (_Bool)0;
int zero = 0;
signed char var_14 = (signed char)-97;
signed char var_15 = (signed char)-111;
unsigned long long int var_16 = 17612298634835190041ULL;
unsigned short var_17 = (unsigned short)2101;
unsigned short var_18 = (unsigned short)62221;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
