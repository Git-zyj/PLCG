#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)109;
unsigned long long int var_1 = 16411193017496978174ULL;
unsigned char var_3 = (unsigned char)144;
unsigned int var_5 = 3766836237U;
long long int var_10 = -4186608488208131656LL;
int zero = 0;
unsigned char var_11 = (unsigned char)220;
unsigned long long int var_12 = 9556190361130327517ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
