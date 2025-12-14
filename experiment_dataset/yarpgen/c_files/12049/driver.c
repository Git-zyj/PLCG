#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-4363;
unsigned long long int var_3 = 15354476405571737640ULL;
long long int var_13 = 870671724291622167LL;
int zero = 0;
unsigned long long int var_17 = 10178437067340215384ULL;
short var_18 = (short)-20611;
void init() {
}

void checksum() {
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
