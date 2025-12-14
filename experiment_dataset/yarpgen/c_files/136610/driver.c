#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1329457703;
unsigned char var_2 = (unsigned char)0;
short var_4 = (short)23756;
int var_10 = -81830463;
int zero = 0;
unsigned short var_11 = (unsigned short)24494;
unsigned long long int var_12 = 15668202438582413206ULL;
long long int var_13 = -8033556950870900962LL;
unsigned long long int var_14 = 3613423282181743050ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
