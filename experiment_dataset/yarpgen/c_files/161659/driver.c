#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)25893;
short var_4 = (short)-3825;
int var_6 = 39503081;
unsigned int var_10 = 3923847569U;
long long int var_14 = 5696542946397525389LL;
int var_15 = 369321444;
int zero = 0;
short var_17 = (short)30937;
unsigned char var_18 = (unsigned char)25;
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
