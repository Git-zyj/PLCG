#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -822589157;
unsigned short var_2 = (unsigned short)19763;
unsigned char var_3 = (unsigned char)70;
int var_4 = 1594689413;
long long int var_5 = 405980392197279055LL;
unsigned char var_6 = (unsigned char)252;
long long int var_11 = 2258167635301603877LL;
long long int var_12 = -1553378363376285613LL;
unsigned char var_13 = (unsigned char)142;
int zero = 0;
unsigned char var_16 = (unsigned char)173;
short var_17 = (short)18145;
signed char var_18 = (signed char)-20;
int var_19 = 2073073017;
unsigned char var_20 = (unsigned char)124;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
