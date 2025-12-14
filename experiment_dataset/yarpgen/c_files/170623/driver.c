#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1104768493;
long long int var_2 = -1944409290875606288LL;
unsigned char var_11 = (unsigned char)30;
long long int var_14 = -8128106365509731354LL;
short var_16 = (short)-22463;
short var_18 = (short)-30986;
int zero = 0;
short var_19 = (short)19853;
unsigned short var_20 = (unsigned short)36779;
unsigned int var_21 = 3528154761U;
unsigned long long int var_22 = 3866263112388447373ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
