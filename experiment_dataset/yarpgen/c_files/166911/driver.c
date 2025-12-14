#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)79;
unsigned long long int var_2 = 11675144453391292692ULL;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)1;
long long int var_6 = -1340702832854185393LL;
unsigned char var_8 = (unsigned char)79;
int zero = 0;
short var_10 = (short)-13288;
unsigned char var_11 = (unsigned char)183;
long long int var_12 = -6656212559568828335LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
