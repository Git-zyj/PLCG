#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-24275;
unsigned char var_7 = (unsigned char)126;
unsigned char var_10 = (unsigned char)71;
unsigned long long int var_14 = 13834913615428523344ULL;
int zero = 0;
int var_16 = -1993940904;
unsigned int var_17 = 2208649101U;
signed char var_18 = (signed char)71;
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
