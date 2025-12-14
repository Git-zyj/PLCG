#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 738498650U;
long long int var_1 = 3817443273800396431LL;
unsigned short var_2 = (unsigned short)20107;
short var_4 = (short)32619;
unsigned int var_9 = 2001064760U;
unsigned short var_10 = (unsigned short)36146;
long long int var_11 = -2106760805165258689LL;
short var_12 = (short)-5379;
int zero = 0;
unsigned long long int var_13 = 13206719137927048408ULL;
int var_14 = -1991552193;
long long int var_15 = -2313599317292518791LL;
unsigned long long int var_16 = 14566946603895101595ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
