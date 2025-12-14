#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_2 = 10933821924336485069ULL;
unsigned short var_4 = (unsigned short)59342;
unsigned char var_8 = (unsigned char)222;
int zero = 0;
short var_11 = (short)-30672;
unsigned char var_12 = (unsigned char)72;
short var_13 = (short)-22561;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
