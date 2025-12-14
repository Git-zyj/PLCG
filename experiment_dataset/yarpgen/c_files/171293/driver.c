#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = -7627853648720404720LL;
unsigned short var_11 = (unsigned short)7216;
long long int var_15 = -2828009699670917425LL;
int zero = 0;
signed char var_16 = (signed char)-26;
short var_17 = (short)-1745;
void init() {
}

void checksum() {
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
