#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)38;
_Bool var_4 = (_Bool)1;
unsigned char var_6 = (unsigned char)183;
short var_8 = (short)2615;
unsigned char var_10 = (unsigned char)12;
_Bool var_11 = (_Bool)0;
int zero = 0;
short var_12 = (short)-4601;
unsigned int var_13 = 2444471794U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
