#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16337516318625574847ULL;
short var_6 = (short)-6932;
signed char var_10 = (signed char)50;
int var_14 = -833183633;
int zero = 0;
unsigned char var_18 = (unsigned char)43;
_Bool var_19 = (_Bool)1;
int var_20 = -1949194579;
short var_21 = (short)-17342;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
