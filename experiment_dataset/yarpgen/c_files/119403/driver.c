#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-18548;
unsigned short var_3 = (unsigned short)19284;
unsigned long long int var_4 = 2295159991719891677ULL;
int var_5 = -699382145;
long long int var_6 = 1433906756870852186LL;
unsigned int var_9 = 3190026904U;
unsigned char var_10 = (unsigned char)209;
int zero = 0;
int var_11 = 759397185;
short var_12 = (short)-825;
unsigned char var_13 = (unsigned char)42;
unsigned long long int var_14 = 17209784864436925112ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
