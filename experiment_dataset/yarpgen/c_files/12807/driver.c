#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4523722634391027571LL;
int var_1 = 2012601161;
int var_2 = 196383784;
short var_4 = (short)3010;
int var_5 = 407824639;
int var_6 = -1733270163;
short var_7 = (short)-7789;
_Bool var_10 = (_Bool)1;
unsigned short var_11 = (unsigned short)53048;
unsigned long long int var_13 = 14979052736635049456ULL;
short var_14 = (short)-23544;
short var_18 = (short)-17865;
signed char var_19 = (signed char)108;
int zero = 0;
unsigned short var_20 = (unsigned short)18922;
unsigned short var_21 = (unsigned short)5975;
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
