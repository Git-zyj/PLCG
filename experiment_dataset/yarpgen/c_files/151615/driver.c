#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-8817;
short var_7 = (short)4943;
long long int var_9 = -3924768789138042832LL;
unsigned char var_10 = (unsigned char)28;
int var_12 = 1608944114;
short var_13 = (short)-6170;
signed char var_15 = (signed char)125;
long long int var_17 = -2650474029326207177LL;
int zero = 0;
unsigned long long int var_18 = 6653186217162942642ULL;
int var_19 = 1320427364;
short var_20 = (short)-16613;
int var_21 = -1163597468;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
