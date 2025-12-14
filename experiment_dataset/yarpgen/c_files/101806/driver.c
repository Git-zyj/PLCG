#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)126;
int var_2 = 1555643432;
unsigned char var_5 = (unsigned char)88;
long long int var_10 = 7954822915010105416LL;
signed char var_13 = (signed char)-108;
unsigned int var_14 = 2906372075U;
int zero = 0;
short var_15 = (short)32209;
long long int var_16 = -3530764228471584995LL;
unsigned char var_17 = (unsigned char)130;
short var_18 = (short)-32062;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
