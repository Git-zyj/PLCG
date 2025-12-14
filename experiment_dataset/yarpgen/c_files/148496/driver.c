#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)59874;
unsigned int var_2 = 4015276663U;
unsigned long long int var_11 = 2990464137988501425ULL;
unsigned long long int var_14 = 12328780047609714383ULL;
int zero = 0;
int var_15 = -464198853;
unsigned char var_16 = (unsigned char)6;
unsigned short var_17 = (unsigned short)9771;
unsigned short var_18 = (unsigned short)37936;
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
