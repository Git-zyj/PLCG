#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-65;
unsigned int var_1 = 2624376379U;
unsigned int var_2 = 4037894590U;
long long int var_3 = -328708592912729196LL;
unsigned long long int var_4 = 5737627113072141672ULL;
signed char var_6 = (signed char)(-127 - 1);
short var_7 = (short)-10005;
unsigned short var_8 = (unsigned short)62809;
short var_10 = (short)-32275;
int zero = 0;
long long int var_11 = -1112529773631478429LL;
short var_12 = (short)-20549;
void init() {
}

void checksum() {
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
