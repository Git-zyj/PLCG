#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-13333;
int var_7 = -1214300331;
unsigned short var_9 = (unsigned short)63725;
unsigned char var_12 = (unsigned char)160;
int var_15 = 1092780023;
unsigned long long int var_17 = 10106475921020220780ULL;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 1616112776154924219ULL;
unsigned char var_20 = (unsigned char)215;
void init() {
}

void checksum() {
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
