#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)19761;
_Bool var_2 = (_Bool)0;
long long int var_4 = -8441159274040180784LL;
unsigned long long int var_6 = 11502709778093796734ULL;
short var_8 = (short)-24024;
unsigned short var_9 = (unsigned short)36965;
int zero = 0;
int var_10 = 451739199;
_Bool var_11 = (_Bool)1;
_Bool var_12 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
