#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 5837520;
unsigned short var_2 = (unsigned short)64091;
short var_3 = (short)-8887;
unsigned short var_4 = (unsigned short)32272;
unsigned char var_9 = (unsigned char)243;
unsigned char var_13 = (unsigned char)69;
int var_14 = 1254315668;
int zero = 0;
short var_15 = (short)2795;
unsigned short var_16 = (unsigned short)38302;
int var_17 = 1702429235;
void init() {
}

void checksum() {
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
