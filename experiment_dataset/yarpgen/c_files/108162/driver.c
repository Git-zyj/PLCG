#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-33;
unsigned short var_5 = (unsigned short)51341;
_Bool var_6 = (_Bool)0;
int var_7 = -478807206;
int var_9 = 2012757357;
short var_11 = (short)-29152;
short var_14 = (short)-4084;
int zero = 0;
int var_15 = 950373291;
unsigned char var_16 = (unsigned char)104;
int var_17 = -1722136544;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
