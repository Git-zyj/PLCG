#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14143546420505402598ULL;
signed char var_4 = (signed char)92;
unsigned short var_6 = (unsigned short)36342;
unsigned long long int var_9 = 15272020348112869038ULL;
long long int var_10 = 8274406759440984311LL;
unsigned long long int var_13 = 7777111120758674678ULL;
short var_15 = (short)-17214;
int var_17 = -909700572;
int zero = 0;
unsigned char var_20 = (unsigned char)33;
unsigned char var_21 = (unsigned char)113;
signed char var_22 = (signed char)-47;
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
