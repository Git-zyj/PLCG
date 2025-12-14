#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)42;
short var_2 = (short)-11639;
unsigned short var_5 = (unsigned short)51225;
unsigned char var_8 = (unsigned char)90;
int var_9 = 1010640455;
unsigned short var_10 = (unsigned short)12333;
signed char var_13 = (signed char)81;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)0;
unsigned char var_16 = (unsigned char)189;
int zero = 0;
unsigned char var_18 = (unsigned char)106;
long long int var_19 = -1483108280194314394LL;
signed char var_20 = (signed char)97;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
