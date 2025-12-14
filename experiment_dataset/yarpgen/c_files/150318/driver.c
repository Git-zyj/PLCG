#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 949183408;
short var_5 = (short)18145;
signed char var_8 = (signed char)84;
short var_9 = (short)-7337;
long long int var_11 = -1777797915397033506LL;
short var_15 = (short)19940;
int zero = 0;
unsigned long long int var_20 = 8596439151108312299ULL;
int var_21 = 306246819;
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
