#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-15771;
unsigned short var_1 = (unsigned short)29987;
unsigned char var_2 = (unsigned char)114;
short var_4 = (short)-17802;
_Bool var_5 = (_Bool)0;
short var_6 = (short)27023;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned long long int var_11 = 15699546787269220957ULL;
unsigned short var_12 = (unsigned short)19445;
short var_13 = (short)10515;
unsigned char var_14 = (unsigned char)145;
unsigned int var_15 = 773774160U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
