#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 822249931;
unsigned short var_2 = (unsigned short)55066;
_Bool var_4 = (_Bool)0;
short var_6 = (short)-4425;
unsigned char var_7 = (unsigned char)73;
unsigned short var_8 = (unsigned short)36959;
unsigned char var_9 = (unsigned char)35;
unsigned short var_12 = (unsigned short)20705;
long long int var_13 = 4013737023123724982LL;
int zero = 0;
short var_16 = (short)28303;
unsigned short var_17 = (unsigned short)31420;
unsigned long long int var_18 = 8226600548826197221ULL;
unsigned short var_19 = (unsigned short)34196;
signed char var_20 = (signed char)99;
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
