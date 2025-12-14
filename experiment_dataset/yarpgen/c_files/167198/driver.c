#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)152;
short var_5 = (short)-18250;
long long int var_6 = 6047718396844959913LL;
short var_9 = (short)15313;
_Bool var_12 = (_Bool)1;
int var_17 = 1382046900;
short var_18 = (short)-32495;
int zero = 0;
unsigned char var_19 = (unsigned char)107;
int var_20 = 1635971677;
void init() {
}

void checksum() {
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
