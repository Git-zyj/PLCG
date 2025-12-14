#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6142613308725234439LL;
short var_6 = (short)-5905;
signed char var_7 = (signed char)-107;
unsigned long long int var_8 = 15197265258735626754ULL;
unsigned long long int var_14 = 5342371864235050431ULL;
unsigned int var_15 = 3559130278U;
int zero = 0;
short var_16 = (short)24326;
unsigned int var_17 = 876768470U;
unsigned long long int var_18 = 14093676193890770912ULL;
void init() {
}

void checksum() {
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
