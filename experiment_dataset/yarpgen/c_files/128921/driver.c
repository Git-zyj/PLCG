#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)34724;
unsigned short var_4 = (unsigned short)16497;
_Bool var_6 = (_Bool)1;
_Bool var_8 = (_Bool)0;
long long int var_15 = -1554517862432077873LL;
int zero = 0;
signed char var_16 = (signed char)115;
long long int var_17 = 5675986773967687734LL;
short var_18 = (short)6463;
short var_19 = (short)-30973;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
