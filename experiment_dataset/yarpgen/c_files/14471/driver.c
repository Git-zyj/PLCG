#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3772986927U;
unsigned int var_14 = 2233835147U;
signed char var_15 = (signed char)71;
unsigned long long int var_16 = 13080243959589958937ULL;
unsigned int var_18 = 3489274407U;
unsigned int var_19 = 2325697405U;
int zero = 0;
unsigned char var_20 = (unsigned char)113;
int var_21 = -868060445;
void init() {
}

void checksum() {
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
