#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)4140;
unsigned long long int var_2 = 2180264974259308175ULL;
long long int var_7 = -2468476592096087542LL;
unsigned char var_9 = (unsigned char)239;
int var_10 = 1841493075;
long long int var_11 = -4352369178116743810LL;
unsigned long long int var_12 = 11637791963779700125ULL;
int zero = 0;
unsigned int var_13 = 266278603U;
unsigned short var_14 = (unsigned short)49344;
void init() {
}

void checksum() {
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
