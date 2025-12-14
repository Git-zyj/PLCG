#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 246979233605222692LL;
unsigned short var_4 = (unsigned short)35167;
unsigned long long int var_5 = 660423471347988744ULL;
long long int var_13 = 8806755961799467014LL;
signed char var_15 = (signed char)16;
int zero = 0;
short var_16 = (short)14922;
unsigned int var_17 = 1334473739U;
unsigned char var_18 = (unsigned char)232;
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
