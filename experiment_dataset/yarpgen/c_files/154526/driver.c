#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 2718908325503349265LL;
short var_6 = (short)-32362;
unsigned char var_9 = (unsigned char)97;
_Bool var_10 = (_Bool)1;
unsigned short var_11 = (unsigned short)20711;
_Bool var_13 = (_Bool)1;
int zero = 0;
short var_14 = (short)3350;
short var_15 = (short)-24309;
short var_16 = (short)25756;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
