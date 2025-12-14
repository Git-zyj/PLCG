#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 9142330516030114261LL;
unsigned long long int var_1 = 5842709840079500882ULL;
unsigned short var_5 = (unsigned short)41832;
signed char var_6 = (signed char)-85;
unsigned short var_7 = (unsigned short)57498;
short var_10 = (short)7686;
int zero = 0;
unsigned short var_19 = (unsigned short)45930;
unsigned long long int var_20 = 2949733592828439878ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
