#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10811985614698018419ULL;
long long int var_2 = -619124596485425860LL;
unsigned short var_5 = (unsigned short)49732;
unsigned char var_9 = (unsigned char)1;
short var_12 = (short)-24164;
unsigned char var_14 = (unsigned char)173;
unsigned short var_15 = (unsigned short)43765;
unsigned long long int var_18 = 15520540158778198323ULL;
int zero = 0;
_Bool var_20 = (_Bool)1;
short var_21 = (short)32175;
void init() {
}

void checksum() {
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
