#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)43;
short var_5 = (short)-8548;
unsigned long long int var_6 = 11985213790830776448ULL;
unsigned short var_7 = (unsigned short)35419;
_Bool var_8 = (_Bool)1;
unsigned short var_9 = (unsigned short)37469;
unsigned short var_10 = (unsigned short)51066;
_Bool var_11 = (_Bool)1;
_Bool var_12 = (_Bool)1;
long long int var_13 = 2175172405412702228LL;
int zero = 0;
unsigned short var_14 = (unsigned short)29765;
unsigned short var_15 = (unsigned short)42365;
int var_16 = -1887129155;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
