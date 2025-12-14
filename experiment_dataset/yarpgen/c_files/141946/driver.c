#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned long long int var_2 = 13285217918921786281ULL;
unsigned short var_3 = (unsigned short)19582;
int var_4 = -1306139157;
unsigned int var_8 = 904937829U;
short var_9 = (short)-423;
int zero = 0;
short var_11 = (short)-22387;
int var_12 = 677571709;
_Bool var_13 = (_Bool)0;
int var_14 = 170545451;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
