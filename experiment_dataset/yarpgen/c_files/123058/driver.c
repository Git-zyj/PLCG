#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)162;
long long int var_6 = 5899542991271910775LL;
signed char var_8 = (signed char)62;
int var_9 = 196897182;
short var_11 = (short)11262;
short var_12 = (short)32596;
int zero = 0;
unsigned long long int var_14 = 129591348412587368ULL;
unsigned long long int var_15 = 11122185897564226190ULL;
unsigned long long int var_16 = 8724819014368765296ULL;
unsigned short var_17 = (unsigned short)22344;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
