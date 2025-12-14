#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)35467;
long long int var_2 = -263590587737471961LL;
unsigned int var_5 = 2795307697U;
unsigned short var_7 = (unsigned short)23659;
int var_10 = -898996129;
unsigned char var_11 = (unsigned char)16;
unsigned char var_13 = (unsigned char)190;
int zero = 0;
short var_14 = (short)-3660;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)0;
int var_17 = 589630987;
long long int var_18 = -8985213157411994494LL;
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
