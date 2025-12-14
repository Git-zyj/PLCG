#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)64378;
unsigned char var_3 = (unsigned char)38;
short var_4 = (short)-4676;
_Bool var_6 = (_Bool)0;
unsigned char var_8 = (unsigned char)104;
unsigned char var_10 = (unsigned char)220;
_Bool var_11 = (_Bool)1;
int zero = 0;
short var_13 = (short)16487;
short var_14 = (short)7280;
short var_15 = (short)19225;
void init() {
}

void checksum() {
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
