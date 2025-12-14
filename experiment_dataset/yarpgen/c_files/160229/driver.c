#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3232666538U;
unsigned short var_3 = (unsigned short)19512;
unsigned short var_4 = (unsigned short)51602;
unsigned char var_5 = (unsigned char)51;
long long int var_6 = 8608567809647485614LL;
int var_8 = 1937619792;
signed char var_9 = (signed char)-20;
int zero = 0;
unsigned char var_11 = (unsigned char)148;
unsigned int var_12 = 2924014381U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
