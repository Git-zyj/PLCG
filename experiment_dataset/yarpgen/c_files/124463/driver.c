#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)1334;
short var_2 = (short)-21177;
short var_3 = (short)-7475;
long long int var_4 = 2222000934151489901LL;
int var_6 = -1722577348;
signed char var_8 = (signed char)-9;
unsigned int var_10 = 1703858216U;
unsigned long long int var_12 = 2320285738007024740ULL;
int zero = 0;
signed char var_13 = (signed char)-117;
unsigned short var_14 = (unsigned short)37069;
signed char var_15 = (signed char)-83;
long long int var_16 = -8286467794231160152LL;
unsigned long long int var_17 = 14079214697469819114ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
