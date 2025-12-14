#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-8770;
unsigned int var_4 = 1797934709U;
short var_9 = (short)-32642;
long long int var_10 = -6878804523543383873LL;
int zero = 0;
unsigned int var_12 = 1080889534U;
short var_13 = (short)-26102;
unsigned short var_14 = (unsigned short)60398;
void init() {
}

void checksum() {
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
