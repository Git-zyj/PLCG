#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)64744;
long long int var_2 = 5908043075964490155LL;
_Bool var_3 = (_Bool)1;
unsigned char var_5 = (unsigned char)78;
short var_7 = (short)-13743;
int var_8 = -1766329573;
short var_9 = (short)30744;
int zero = 0;
int var_10 = 1956664697;
long long int var_11 = 6494559742910984635LL;
unsigned short var_12 = (unsigned short)38796;
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
