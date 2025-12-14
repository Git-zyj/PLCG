#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)74;
unsigned short var_3 = (unsigned short)36105;
_Bool var_5 = (_Bool)0;
short var_6 = (short)-10678;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 7349921033907038103ULL;
long long int var_13 = 7168086320529116507LL;
long long int var_14 = 1410580656948309432LL;
int var_15 = -653192434;
int zero = 0;
unsigned short var_20 = (unsigned short)43954;
unsigned short var_21 = (unsigned short)36922;
_Bool var_22 = (_Bool)1;
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
