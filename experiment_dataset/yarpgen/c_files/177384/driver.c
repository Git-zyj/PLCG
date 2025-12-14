#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)111;
int var_3 = -1155601505;
unsigned int var_4 = 91323818U;
unsigned char var_8 = (unsigned char)178;
unsigned char var_11 = (unsigned char)204;
short var_13 = (short)-16619;
int zero = 0;
unsigned long long int var_17 = 7275341655910723949ULL;
long long int var_18 = -1824087727214587767LL;
short var_19 = (short)8461;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
